

## Glib: It provides data structure handling for C, portability wrappers,
         and interfaces for such runtime functionality as an event loop, threads,
         dynamic loading, and an object system.


https://github.com/GNOME/glib


## Gstreamer: A library for constructing graphs of media-handling components.
              The applications it supports range from simple Ogg/Vorbis playback,
              audio/video streaming to complex audio (mixing) and video (non-linear editing) processing. 

https://gstreamer.freedesktop.org/

demo:
gst-launch-1.0 udpsrc port=3000 ! application/x-rtp,clock-rate=90000,payload=96,media=video,encoding-name=H264 ! rtph264depay ! h264parse ! msdkh264dec async-depth=1 output-order=1 ! msdkvpp ! glimagesink sync=false


## ALSA: Advanced Linux Sound Architecture.

https://alsa-project.org/wiki/Main_Page



## libpng: is the official PNG reference library.

http://www.libpng.org/


## Gear Libraries: This is a collection of basic libraries.

https://github.com/gozfree/gear-lib


## OpenCV: Open Source Computer Vision Library

https://github.com/opencv/opencv
