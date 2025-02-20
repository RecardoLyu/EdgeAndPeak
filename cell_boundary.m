function [edge] = cell_boundary(img_in, edge_width)
%GET_BOUNDARY , Yunhui Lyu, 2025/2/17, segment boudary of the Cell in
%img_in
% img_input: 输入图像，
% edge_width: 提取的边界宽度(pxl)
% assert(ismatrix(img_in), 'Input must be a grey scale image.');
% assert(isnumeric(edge_width) && isscalar(edge_width), 'Boundary width must be a scalar.');
%% Gaussian filter process
W = fspecial('gaussian', [10, 10], 80);
img_gaussian = imfilter(img_in, W, 'replicate');

%% Binarize the image
edge = imbinarize(img_gaussian);

%% BW image morphological operation
SE = strel("disk", 8);
temp = imclose(edge, SE);
SE = strel("disk",6);
temp = imopen(temp, SE);
SE = strel("disk",8);
temp = imerode(temp,SE);
SE = strel("disk",3);
temp = imopen(temp, SE);

%% Edge detection
edge = temp;
edge = ~edge;
edge = ~bwareaopen(edge, 40000);
edge = bwareaopen(edge, 25000);
% 修改边界宽度
SE = strel("disk", edge_width);
temp_in = imerode(edge,SE);
edge = edge - temp_in;
% imwrite(boundary,['./resource/boundary_',num2str(save_idx),'.png'])
end

