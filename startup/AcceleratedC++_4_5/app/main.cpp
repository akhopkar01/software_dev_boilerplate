/************************************************************************
 *
 * Copyright: 2020
 * Owner: Aditya Khopkar
 *
 * @brief: This file is the main file. The main function begins and ends here.
 * This program is responsible in storing an inline input in a vector and subsequently,
 * find the word count as well as number of occurrences of each word.
 ************************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>

/**
 * @brief: Stores a bag of words from a given input.
 * @param: void.
 * @return: vector of type string.
 */
std::vector<std::string> WordStorage();

int main() {
  // an ordered STL map initialized to keep track of the unique words.
  std::map<std::string, int> dictionary;

  // iterator object of the map instantiated.
  std::map<std::string, int>::iterator it;

  // bag of word from method WordStorage()
  std::vector < std::string > word_bag = WordStorage();
  std::cout << "The total number of words in input: " << word_bag.size()
      << std::endl;

  // store the words in the map, keep count of all the words.
  for (auto &word : word_bag)
    dictionary[word]++;

  // iterate through the map to print the word count.
  for (it = dictionary.begin(); it != dictionary.end(); it++) {
    std::cout << "The word '" << it->first << "' occurs " << it->second
        << " times." << std::endl;
  }
}

std::vector<std::string> WordStorage() {
  std::string input;
  std::string word;
  std::vector < std::string > word_bag;
  std::cout << "Please Enter your input: " << std::endl;
  std::getline(std::cin, input);

  // sstream used to store entries from the input.
  std::istringstream stream(input);
  while (stream >> word)
    word_bag.push_back(word);
  return word_bag;
}
