#include <iostream>
#include "Assignment2.hpp"
#include <vector>


int main(){
  std::vector<std::string> words = readFileLine("test.txt");
  std::vector<std::string> words2 = readFileLine("test2.txt");
  bool assignmentTest = assignmentStatment(words);
  bool declaritiveTest = declarativeStatment(words2);
  std::cout << "Assigned correctly?: " << assignmentTest <<'\n';
  std::cout << "Declared correctly?: " << declaritiveTest << '\n';
  return 0;
}
