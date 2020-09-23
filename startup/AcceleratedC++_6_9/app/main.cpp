/************************************************************************
 *
 * Copyright: 2020
 * Owner: Aditya Khopkar
 *
 * @brief: This file is the main file. The main function begins and ends here.
 * This program is responsible for using algorithm library to concatenate words.
 ************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  // output string initialization.
  std::string concat;

  // vector of words initialization.
  std::vector < std::string > words { "My", "name", "is", "Aditya", "Khopkar" };
  std::for_each(words.begin(), words.end(), [&](const std::string &word) {
    concat += word;
  });
  std::cout << "Concatenated string is: " << concat << std::endl;
  return 0;
}
