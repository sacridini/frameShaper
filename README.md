# Frame Shaper

In progress...

## Frame Shaper uses Openframeworks (www.openframeworks.cc), an open source C++ toolkit to edit videos in real time. 

## To do:
.Implement the Shape Engine to get the possibility of merging polygons with video.

## Configuration:
The video data is hardcoded. You'll need to edit the "video.load("Chronos.mp4");" line in VideoClass.hpp and add another video to the project folder in "../nitVid/bin/data/". Thats the default project data folder when you use openframeworks.
More info: https://www.youtube.com/watch?v=FMnNmsJSyTw&index=11&list=PL4neAtv21WOmrV8z9rSzL20QpdLU1zJLr

The project was created using XCode 7.3.

## Quick Guide:
You can change the volume and speed of the video in real time with the GUI controls and set 10 different cues using the keyboard (from 1 to 0). You can also erase the cues using the "shift + number" too (ex: shift + 1 erase the current number 1 position and override to the current frame).

### Keyboard shortcuts:

spacebar = Start/Pause video

Left Key = Next Frame

Right Key = Previous Frame

Z = show/hide the GUI.

1 - save position to number 1

2 - save position to number 3

3 - save position to number 3

...

0 - save position to number 0

shift + 1 = erase the position 1 and set the current position to the 1 key.

shift + 2 = erase the position 1 and set the current position to the 2 key.

shift + 3 = erase the position 1 and set the current position to the 3 key.

...

shift + 0 = erase the position 1 and set the current position to the 0 key.


##Screen Shot:
![screen shot 2016-11-23 at 8 43 16 pm](https://cloud.githubusercontent.com/assets/7756611/20581118/e5def066-b1bd-11e6-9548-a2a2a8ecf909.png)

Video credits:
Choros / 2011 / 13 min / HD / Stereo

Directed by Michael Langan and Terah Maher

https://vimeo.com/35770492
