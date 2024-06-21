# Setting-up - Epitech project

## Introduction

`setting_up` is a personal project that aims to find the largest possible square on a board while avoiding obstacles. This project, part of my Epitech curriculum, enhances my understanding of dynamic programming, file handling, and C programming.

## Features

- Find and display the largest square of empty spaces on a given board.
- Read board configuration from a file.
- Generate a board based on given parameters.

## Installation

Follow these steps to set up `setting_up`:

1. **Clone the Repository:**

    ```bash
    git clone https://github.com/jeremyarmijo/Setting_up.git
    ```

2. **Navigate to the Project Directory:**

    ```bash
    cd setting_up
    ```

3. **Compile the Project:**

    ```bash
    make
    ```

## Usage

### Reading Board from a File

To run the program with a board configuration from a file, use the following command:

```bash
./setting_up <file>
```

### Generating a Board

To generate a board with specified width, height, and pattern, use the following command:

```bash
./setting_up <size> <pattern>
```

### Examples

1. **Reading Board from a File:**

    ```bash
    ./setting_up example_file
    ```

    Example content of `example_file`:

    ```
    9
    ...........................
    ....o......................
    ............o..............
    ...........................
    ....o......................
    ..............o............
    ...........................
    ......o..............o.....
    ..o.......o................
    ```

2. **Generating a Board:**

    ```bash
    ./setting_up 6 "..o.."
    ```
3. **Executing with a File:**
    ```bash
    ./setting_up empty_map.txt
    ```
