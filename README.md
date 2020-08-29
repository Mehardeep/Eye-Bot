# Eye-Bot
Eye controlled Bot

The tracking of eye is done by using Voila-jones algorithm and image processing is done using MATLAB followed by commands sent through serial communication to Arduino board. The L293D motor driver is used to control motor of wheel chair with respect to signals from Arduino
A webcam is mounted on a cap, continuously staring at the user’s eyes. server is running a MATLAB application designed to monitor and react to eye movements. Based on a series of snapshots taken and thereafter processed, the motion of the user’s eyes are detected, decision to move the Wheel Chair in a particular direction is taken and communicated serially to ATMega1284P microcontroller. MATLAB 2013 has an image processing toolbox which we utilized for the eye detection. We used the

‘Cascade Object Detector’ capable of detecting eye-shaped objects based on their shape and size. It uses the Viola Jones Algorithm for the same. 

Continuous snapshots of every 25th frame are taken and feature points extracted are saved i.e. we capture approximately 1 snapshot every second and process it. Based on the position of the feature points in previous snapshot and current snapshot, a movement is detected and this is communicated to the rover assembly via the serial port.


![leftside](https://user-images.githubusercontent.com/30156849/91642798-e560e200-ea4b-11ea-8eb7-cb26ae97e6ff.png)

![rightside](https://user-images.githubusercontent.com/30156849/91642800-e6920f00-ea4b-11ea-80c5-4e5b9a535c7f.png)

![straight](https://user-images.githubusercontent.com/30156849/91642801-e6920f00-ea4b-11ea-8208-5e14bfdd9c70.png)

![debugscreen](https://user-images.githubusercontent.com/30156849/91642796-e3971e80-ea4b-11ea-88ba-74dedad42943.png)
