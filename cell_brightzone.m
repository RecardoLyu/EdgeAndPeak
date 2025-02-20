function [peak_mask] = cell_brightzone(img_in, strel_size)
% assert(ismatrix(img_in), 'Input must be a grey scale image.');
% assert(isnumeric(strel_size) && isscalar(strel_size), 'Strel size must be a scalar.');
% CELL_BRIGHTZONE, Yunhui Lyu, 2025/2/17,  Detect areas of the image with
% rapid brightness changes.
% img_in:输入待求图片
% peak_mask:图片较亮点/亮度变化较为剧烈的位置的mask
% strel_size:结构元素尺寸(pxl)，该值越大，得到的结果的面积就越大
img_max = max(max(img_in));
img_min = min(min(img_in));
img_norm = (img_in - img_min)./(img_max-img_min);
SE = strel('disk', 20);
img_tophat = imtophat(img_norm, SE);

% Laplacian filter
laplacian_operator = [0, 1, 0;
                      -1, 4, -1;
                      0, -1, 0];
img_lap1 = imfilter(img_tophat,laplacian_operator, "replicate");
peak_mask = img_lap1;
peak_mask = imbinarize(peak_mask, 'global');
SE = strel('diamond', strel_size);
peak_mask = imerode(peak_mask,SE);
SE = strel('diamond', strel_size-1);
peak_mask = imdilate(peak_mask, SE);
% imwrite(peak_mask,['./resource/peak_',num2str(save_idx),'.png'])
end

