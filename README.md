# Determinate Matrix Calculator (C++)

## Description

This C++ project is a Determinant Matrix Calculator. It provides a simple and efficient way to calculate the determinant of a square matrix of any size. The code is written in C++ and can be used for educational purposes or as a building block for more complex linear algebra applications.

## Features

- Calculates the determinant of a square matrix.
- Supports matrices of any size (limited only by available memory).
- Implements the Laplace expansion formula for determinant calculation.

## Getting Started

Follow these instructions to get the project up and running on your local machine.

### Prerequisites

- C++ compiler (e.g., g++, Visual C++).
- CMake (for building).

### Building

1. Clone the repository to your local machine:

   ```shell
   git clone https://github.com/yourusername/cpp-determinate-matrix-calculator.git
   cd cpp-determinate-matrix-calculator
   ```

2. Create a build directory:

   ```shell
   mkdir build
   cd build
   ```

3. Generate the build files with CMake:

   ```shell
   cmake ..
   ```

4. Build the project:

   ```shell
   make  # Use 'nmake' on Windows with Visual C++
   ```

### Usage

You can use the Determinant Matrix Calculator as a library in your own C++ projects. Include the `determinant_calculator.h` header in your code, and call the `calculateDeterminant` function with your matrix as an input. Check out the `main.cpp` for an example.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contributing

If you want to contribute to this project, feel free to open an issue or create a pull request. Your contributions are highly appreciated!

## Acknowledgments

- This project was inspired by the need for a simple determinant calculator for educational purposes.

## Contact

If you have any questions or suggestions, you can contact the project maintainer at idj.idejong@gmail.com.

---

Happy coding!
