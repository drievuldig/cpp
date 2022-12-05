#include "grid.h"

int main(int argc, char *argv[]) {
  std::cout << "Conway's game of Life\n";
  std::cout << "Press the return key to display each generation\n";

  // Wait for user to press return key
  std::cin.get();

  // Grid for the first generation;
  grid current_generation;

  // Populate the cells at random
  current_generation.randomize();

  while (true) {
    // Draw the current generation
    current_generation.draw();

    grid next_generation;

    // Wait for user to press return key
    std::cin.get();

    // Populate the cells in the next generation
    calculate(current_generation, next_generation);

    // Update to the next generation
    current_generation.update(next_generation);
  }

}