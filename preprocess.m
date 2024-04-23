%% pre
clc
clear
close all
root_path = 'D:\Data\20240422-CUT&Tag-SC35 LaminB\asTif\';
file_format = '*.tif';

%% boundary

boundary_cell = struct2cell(dir(fullfile([root_path,'boundary\'], file_format)));
boundary_cell = boundary_cell(1,:);
for i = 1:length(boundary_cell)
    img = imread([root_path,'boundary\',boundary_cell{i}]);
    tic
    boundary = get_edge(img, 1, 5);
    toc
    disp(toc)
    figure()
    ax1 = subplot(1,2,1); imshow(img)
    ax2 = subplot(1,2,2); imshow(boundary)
    linkaxes([ax1, ax2])
end


%% peak
peak_cell = struct2cell(dir(fullfile([root_path,'peak\'], file_format)));
peak_cell = peak_cell(1,:);
for i = 1:length(peak_cell)
    img = imread([root_path,'peak\',peak_cell{i}]);
    img = im2double(img);
    img_max = max(max(img));
    img_min = min(min(img));
    raw = (img - img_min)./(img_max-img_min);
    tic
    peak_mask = get_peak(img, i, 3);
    toc
    disp(toc)
    figure()
    ax1 = subplot(1,2,1); imshow(raw)
    ax2 = subplot(1,2,2); imshow(peak_mask)
    linkaxes([ax1, ax2])
end
