# Controlling LED Brightness using Potentiometer
In this project we will control the brightness of *LED* using *potentiometer* with *Arduino*.
First we will read the analog value of *potentiometer* with analog input. Analog input ranges
from 0 to 1023. When rotate the head of the *potentiometer* that means you are barying the value
from 0 to 255. Now the value of analog output pins of *arduino* vary from 0 to 255.
So we need to convert the input value to a suitable value ranges from 0 to 255.
For this we just need simple mathematics.

outpu_value = (255/1023)*input_value

We are all done. Now we will write this analog value to the *LED* pin.And now we are
ready to play with the *potentiometer* and control the *LED* brightness.
