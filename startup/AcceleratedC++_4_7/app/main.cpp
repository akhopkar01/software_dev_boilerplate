/************************************************************************
 *
 * Copyright: 2020
 * Owner: Aditya Khopkar
 *
 * @brief: This file is the main file. The main function begins and ends here.
 * This program is responsible in finding the average of the vector.
 ************************************************************************/
#include <iostream>
#include <vector>

/**
 * @brief: GetAverage method is implemented to find the average of the data in the vector.
 * @param: a const reference to the vector of type double.
 * @return: average of data type double.
 */
double GetAverage(const std::vector<double>&);

int main() {
  // vector initialization.
  std::vector<double> storage { 4, 5, 6, 7, 1 };
  std::cout << "Average of the vector is: " << GetAverage(storage) << std::endl;
}

double GetAverage(const std::vector<double> &arr) {
  // sum initialization.
  double sum { 0 };

  // iterate through the elements of the vector and find the sum.
  for (std::vector<double>::size_type i = 0; i < arr.size(); i++) {
    sum += arr[i];
  }
  return sum / arr.size();
}
