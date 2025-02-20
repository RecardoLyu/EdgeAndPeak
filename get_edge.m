function [edge] = get_edge(img_in, bin_arg, edge_width)
%GET_BOUNDARY , Yunhui Lyu, 2024/4/19, detect the edge of cell in img_in,
% img_input: 输入图像，
% bin_arg:二值化策略，1 -> "global"  2 -> "adaptive"
% edge_width: 提取的边界宽度(pxl)
if nargin < 3
    edge_width = 3;
end
bin_arg_stack = {"global", "adaptive"};
%% Gaussian filter process
W = fspecial('gaussian', [10, 10], 80);
img_gaussian = imfilter(img_in, W, 'replicate');

%% Binarize the image
edge = imbinarize(img_gaussian, bin_arg_stack{bin_arg});

%% BW image morphological operation
% temp = bwmorph(boundary, "close", Inf);
SE = strel("disk", 8);
temp = imclose(edge, SE);
SE = strel("disk",6);
temp = imopen(temp, SE);
temp = bwmorph(temp, "fill",Inf);
SE = strel("disk",8);
temp = imerode(temp,SE);
SE = strel("disk",3);
temp = imopen(temp, SE);

%% Edge detection
edge = temp;
edge = ~edge;
edge = ~bwareaopen(edge, 50000,8);
edge = bwareaopen(edge, 25000);
% 修改边界宽度
SE = strel("disk", edge_width);
temp_in = imerode(edge,SE);
edge = edge - temp_in;
% imwrite(boundary,['./resource/boundary_',num2str(save_idx),'.png'])
end

