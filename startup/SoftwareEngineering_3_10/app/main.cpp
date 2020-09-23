/************************************************************************
 *
 * Copyright: 2020
 * Owner: Aditya Khopkar
 *
 * @brief: This file is the main file. The main function begins and ends here.
 * This file tests the class CourseGrader for 3 students.
 ************************************************************************/
#include <iostream>
#include "CourseGrader.h"

int main() {
  // create instance of class CourseGrader for 3 students
  se::CourseGrader enpm_808x(3);

  // SetGrade for 3 students
  enpm_808x.SetGrade(0, 43);
  enpm_808x.SetGrade(1, 50);
  enpm_808x.SetGrade(2, 10);
  std::cout << "The class average is: " << enpm_808x.GetClassAvg() << std::endl;
}
