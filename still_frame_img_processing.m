%% Load sample frames
% subplot(3, 1, 1);
% imshow(frame);

%% Video thresholding
% Convert RGB image to chosen color space
I = rgb2hsv(frame);

% Define thresholds for channel 1 based on histogram settings
channel1Min = 0.986;
channel1Max = 0.026;

% Define thresholds for channel 2 based on histogram settings
channel2Min = 0.000;
channel2Max = 1.000;

% Define thresholds for channel 3 based on histogram settings
channel3Min = 0.906;
channel3Max = 1.000;

% Create mask based on chosen histogram thresholds
sliderBW = ( (I(:,:,1) >= channel1Min) | (I(:,:,1) <= channel1Max) ) & ...
    (I(:,:,2) >= channel2Min ) & (I(:,:,2) <= channel2Max) & ...
    (I(:,:,3) >= channel3Min ) & (I(:,:,3) <= channel3Max);
BW = sliderBW;



%% Get rid of image fuzz


[labeledImage numberOfObjcts] = bwlabel(BW);
blobMeasurements = regionprops(labeledImage,'Perimeter','Area', 'Centroid'); 
% for square ((a>17) && (a<20))
% for circle ((a>13) && (a<17))
% for triangle ((a>20) && (a<30))
circularities = [blobMeasurements.Perimeter].^2 ./ (4 * pi * [blobMeasurements.Area])

temp = [0, 0, 0, 0];
circ_shape = size(circularities);
for i:circ_shape(2)
    temp(i) = circularities(i);
end



% %% Blob analysis
% hBlobAnalysis = vision.BlobAnalysis('MinimumBlobArea', 1, 'MaximumBlobArea', 100000);
% [objectArea, objCentroid, bboxOut] = step(hBlobAnalysis, BW)
% 
% %% Annotate the image
% Ishape = insertShape(frame, 'rectangle', bboxOut, 'Linewidth', 5);
% imshow(Ishape)



% size_of_bbox = size(bboxOut);
% err = 3;
% for i=1:size_of_bbox(1)
%     
%     % Squareness
%     if abs(bboxOut(i, 3) - bboxOut(i, 3)) < squareness_threshold
%         %width              %height
%         if (bboxOut(i, 3) > 42-err) && (bboxOut(i, 3) < 42 + err)
%             
%         end
%     end
     
    %Sizeness
    

%     
% end




