# third-year-project
STM32cubeIDE code for my BLDC drive board.
main.c is contains all the function and callbacks to implement the functionality shown in the software flow diagram.
The other flile contains the python script that was used for data acquisition.

This software rotates the motor in open-loop and closed-loop control.
All the technical details needed to understand the software flow is in the report. Contains all the algorithms used.
To install, create a SMT32cubeIDE project and open the main folder in the github.
The software begins running in closed-loop control. Pressing the user button B2 will result in a step change in torque. 

The software is not optimise for running the motor in closed-loop control -> further testing is needed to provide this feature. 
