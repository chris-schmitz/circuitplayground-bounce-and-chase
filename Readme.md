# Bounce and Chase

> A simple demo of state machine logic for Arduino.

<img src="readme_attachments/bounce_and_chase_demo.gif" height="400">

This is a really simple demo I created while reading over [adafruit's tutorial on multi-tasking in arduino](https://learn.adafruit.com/multi-tasking-the-arduino-part-1/overview). This tutorial was what really helped me wrap my head around state machines.

## To do
I'm going to clean it up a bit by abstracting the state machine into a class and instantiating it instead of duplicating the logic the way I am now. I think I'm also going to trigger one or both sides via interrupt (maybe I'll let it run like it is now if the circuit playground switch is on and have it inturrupt if the switch is off) to get a better idea of how to trigger multiple commands via physical triggers.