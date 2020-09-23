/************************************************************************
 *
 * Copyright: 2020
 * Owner: Aditya Khopkar
 *
 * @brief: This file is the header filer of the class CourseGrader
 ************************************************************************/
#pragma once

namespace se {

/**
 * @brief: This class is responsible for grading the students
 * registered in the course. This class has attributes such as
 * total number of students, array of grades where the index is
 * the student ID.
 */
class CourseGrader {
 private:
  // member variable: total number of students.
  int n_;

 public:
  // stores the grades (float) of the students represented by index of array.
  float grades_[1000] { 0 };

  /**
   * @brief: SetGrade function is implemented to set the grade of the student.
   * @param: student id (int), grade (float) to be set.
   * @return: void
   */
  void SetGrade(int, float);

  /**
   * @brief: GetClassAvg is a function implemented to calculate the average of the grades of the class.
   * @param: member array - grades_.
   * @return: average of the array (float).
   */
  float GetClassAvg();

  // constructor called
  explicit CourseGrader(int n_students)
      :
      n_ { n_students } {
  }

  // destructor
  virtual ~CourseGrader() {
  }
};
}  // namespace se
