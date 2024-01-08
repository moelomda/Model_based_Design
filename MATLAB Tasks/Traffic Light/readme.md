# MATLAB Traffic Light Simulation

Simulate the behavior of a traffic light using MATLAB. This code creates a graphical representation of a traffic light with red, yellow, and green lights and simulates the sequence of changing lights.

## Overview

This MATLAB script generates a simple graphical simulation of a traffic light using rectangles to represent the body and individual lights. The traffic light goes through the standard sequence of red, yellow, and green lights with a pause of 2 seconds for each state. The simulation runs in an infinite loop until manually stopped.

## Code Structure

- **Create a Figure:**
  - The `figure` function is used to create the main figure for the simulation.

- **Draw the Traffic Light Body:**
  - The `rectangle` function is employed to draw the body of the traffic light with a specified position, curvature, color, and line properties.

- **Draw Red, Yellow, and Green Lights:**
  - Three rectangles are drawn to represent the red, yellow, and green lights with their respective positions, curvatures, colors, and line properties.

- **Set Axis Equal and Add Title:**
  - The `axis equal` function ensures that the aspect ratio of the plot is equal, providing a better representation. The `title` function adds a title to the plot.

- **Traffic Light Simulation Loop:**
  - A `while` loop runs indefinitely, simulating the changing lights in a sequence with a 2-second pause between each state.

## How to Use

1. Copy and paste the provided MATLAB code into a new or existing MATLAB script.

2. Run the script in MATLAB.

3. The simulation will display a graphical representation of a traffic light, and the lights will cycle through the standard sequence.

4. To stop the simulation, manually interrupt the script execution in the MATLAB command window.

## Dependencies

This script has no external dependencies beyond MATLAB R20XXa or later.

## Author

Mohamed Ahmed Fouad Youssef 



