# Cube 3D with Raycasting

This project is an implementation of a 3D cube using raycasting technique to simulate a three-dimensional view in a 2D window.

## Features

- **Display of a 3D cube in a graphical window.**
- **Use of raycasting to determine distances between the camera and the walls of the cube.**
- **Handling of movement controls to navigate around the cube.**

## Installation

Works on MacOS

1. Clone this repository to your machine:
    ```sh
    git clone <repository link>
    ```
3. Navigate to the project directory:
    ```sh
    cd Cub3D
    ```
4. Compile the project by running:
    ```sh
    make
    ```
5. Launch the game:
   ```sh
    ./cub3D map/map.cub
   ```

You can use WASD keys to move, arrow keys to turn the camera, and ESC key to quit the game.

## Explanation of Raycasting

Raycasting is a technique used to simulate the projection of light rays from a viewpoint (the camera) and detect intersections with three-dimensional objects (in this case, the walls of the cube). By using raycasting, we can calculate the distance between the camera and each wall of the cube, allowing us to generate a 2D image representing a perspective view of the cube.

In this project, raycasting is used to determine the distance between the camera and the walls of the cube by casting rays in different directions from the camera's position. By measuring the distance until a ray intersects with a wall, we can determine the relative position of the wall to the camera and display the cube accordingly.

## Contributors
[pschemit](https://github.com/Monkey42Github)

[yboughan](https://github.com/YoussefBOUGHANMI)
