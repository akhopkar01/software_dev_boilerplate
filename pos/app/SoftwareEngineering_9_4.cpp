/*******************************************************************************************************
 *
 * Copyright: 2020
 * Owner: Aditya Khopkar
 * @brief: This file contains the main function. The main execution of the
 * program occurs in this file.
 *
 * *****************************************************************************************************/

#include <iostream>

/**
 * @brief: Helper function which performs the task of finding position of a
 * character string to find in a given text string
 * @param: ptr to text character array, ptr to char array to find, text
 * character length, search char array length
 * @return: position of first occurence: int.
 * */
int GetPosition(char*, char*, int, int);

/**
 * @brief: Function prints the position of occurence of sub char
 * @param: void
 * @return: void
 * */
void PrintPosition();

/**
 * @brief: main function, the main execution of the program happens here
 * @param: void
 * @return: return 0: int
 * */
int main() {
  std::cout << "The position is: ";
  PrintPosition();
  return 0;
}

void PrintPosition() {
  // Text arr to search from
  char text[1024] = "1234567890";

  // length of text arr
  int text_length = 10;

  // Search arr to search in text arr
  // Along with length
  char array_to_search1[4] = "23";
  int array_to_search1_length = 2;

  // Helper function to find the position
  int pos = 
      GetPosition(text, array_to_search1, text_length, array_to_search1_length);
  std::cout << pos << std::endl;
}

int GetPosition(char* text, char* search, int text_length, int array_s_length) {
  // Iterators initialized
  int i, j;

  // Position initialized
  int position = -1;

  // Iterates through the entire length of the text arr
  // Checks for matching character sequence with the search arr and updates
  // position
  for (i = 0; i < text_length - array_s_length + 1; i++) {
    // Flag to indicate character sequence found
    bool found = true;

    // Compares every character of the text arr with the search arr
    for (j = 0; j < array_s_length; j++) {
      if (text[i + j] != search[j]) found = false;
    }
    // If flag detected, update the position
    if (found) {
      position = i;
      break;
    }
  }
  return position;
}
