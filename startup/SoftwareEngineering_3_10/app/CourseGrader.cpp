/************************************************************************
 *
 * Copyright: 2020
 * Owner: Aditya Khopkar
 *
 * @brief: CourseGrader.cpp contains the class method definition of class CourseGrader
 ************************************************************************/
#include "CourseGrader.h"

void se::CourseGrader::SetGrade(int id, float grade) {
  // set grade in the array
  grades_[id] = grade;
}

float se::CourseGrader::GetClassAvg() {
  // sum set to 0
  float sum { 0 };

  // calculates the sum of the array.
  for (auto &grade : grades_)
    sum += grade;
  return sum / n_;
}
