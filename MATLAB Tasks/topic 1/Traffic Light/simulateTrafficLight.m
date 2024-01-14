% Create a figure
figure;

% Draw the traffic light body
trafficLightBody = rectangle('Position', [1, 0, 4, 10], 'Curvature', [0.1, 0.1], 'FaceColor', 'k', 'EdgeColor', 'k', 'LineWidth', 2);

% Draw the red light
redLight = rectangle('Position', [2.3, 7.7, 1.4, 1.4], 'Curvature', [1, 1], 'FaceColor', 'red', 'EdgeColor', 'k', 'LineWidth', 2, 'Visible', 'off');

% Draw the yellow light
yellowLight = rectangle('Position', [2.3, 5.2, 1.4, 1.4], 'Curvature', [1, 1], 'FaceColor', 'yellow', 'EdgeColor', 'k', 'LineWidth', 2, 'Visible', 'off');

% Draw the green light
greenLight = rectangle('Position', [2.3, 2.7, 1.4, 1.4], 'Curvature', [1, 1], 'FaceColor', 'green', 'EdgeColor', 'k', 'LineWidth', 2, 'Visible', 'off');

% Set axis equal for a better representation
axis equal;

% Set the title
title('Traffic Light Simulation');

% Loop to simulate the traffic light behavior
while true
    % Red light on
    set(redLight, 'Visible', 'on');
    set(yellowLight, 'Visible', 'off');
    set(greenLight, 'Visible', 'off');
    set(trafficLightBody, 'FaceColor', 'k'); % turn off the traffic light body
    pause(2);

    % Yellow light on
    set(redLight, 'Visible', 'off');
    set(yellowLight, 'Visible', 'on');
    set(greenLight, 'Visible', 'off');
    set(trafficLightBody, 'FaceColor', 'k'); % turn off the traffic light body
    pause(2);

    % Green light on
    set(redLight, 'Visible', 'off');
    set(yellowLight, 'Visible', 'off');
    set(greenLight, 'Visible', 'on');
    set(trafficLightBody, 'FaceColor', 'k'); % turn off the traffic light body
    pause(2);
end
