-in image processing block where xcom and ycom are generated, need to add a protection that makes it so that xcom ycom still exists (can just be 1,1 or something) when no path 
pixels are present on the screen. this is necessary for the landing to work, as xcom ycom are currently still calculated and operated on even when landing.

-multiplexers need debugging

-the code that generates new x,y,z coordinates during landing needs completing

-a constant yaw, pitch and roll should be added and bundled up with the x,y,z coords for the landing references
