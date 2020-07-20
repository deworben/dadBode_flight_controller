%%importVideoFile
% Acquire and view video from a video file

% Copyright 2014-2015 The MathWorks, Inc.

%% Set up the video file reader
FR = vision.VideoFileReader('output.avi', 'VideoOutputDataType', 'double');

%% Acquire video until the video is finished
while (~isDone(FR))
    frame = step(FR);
    imshow(frame);
end

%% Cleanup
release(FR);