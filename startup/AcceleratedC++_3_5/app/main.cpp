/************************************************************************
 *
 * Copyright: 2020
 * Owner: Aditya Khopkar
 *
 * @brief: This file is the main file. The main function begins and ends here.
 * This program is responsible in handling inputs from the user to store student names
 * and their final grades in two synchronized vectors.
 ************************************************************************/
#include <iostream>
#include <vector>
#include <string>

int main() {
  std::vector < std::string > student_name;
  std::string name;
  std::vector<double> grades;
  double hw_avg { 0 };
  double mid_term, final_term;

  // end of line flag
  bool end_entry { false };

  // check user entry for program termination.
  char check;

  // while termination condition is not true.
  while (!end_entry) {
    std::cout << "Enter Student Name (without spaces): " << std::endl;
    std::cin >> name;
    student_name.push_back(name);
    std::cout << "Enter mid-term grade of the student: " << std::endl;
    std::cin >> mid_term;
    std::cout << "Enter the final-term grade of the student: " << std::endl;
    std::cin >> final_term;
    std::cout
        << "Enter 3 homework grades of the student followed by end-of-file: "
        << std::endl;

    // the number of homework grades and the sum of grade
    int count { 0 };
    double grade = 0;

    // homework grade input
    double homework;

    // sum of grades of all the homework grades entered
    while (count < 3) {
      std::cin >> homework;
      ++count;
      grade += homework;
    }

    // Average of the homework grades
    hw_avg = grade / 3;

    // Compute final grade
    double final_grade = 0.4 * final_term + 0.2 * mid_term + 0.4 * hw_avg;
    grades.push_back(final_grade);
    std::cout << "Hello " << name << "! Your final grade is: " << final_grade
        << std::endl;

    // Check if program needs to continue
    std::cout << "Do you want to add a student? (Y/N) " << std::endl;
    std::cin >> check;
    if (check == 'N' || check == 'n') {
      // termination flag activated.
      end_entry = true;
      std::cout << "Program terminating.." << std::endl;
    }
  }
}
