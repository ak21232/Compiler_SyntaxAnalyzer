#include <iostream>
#include "Assignment2.hpp"
#include <vector>


int main(){
  std::vector<std::string> words = readFileLine("test.txt");
  std::vector<std::string> words2 = readFileLine("test2.txt");
  bool assignmentTest = assignmentStatment(words);
  bool declaritiveTest = declarativeStatment(words2);
  if (assignmentTest == true){
    for (int i = 1; i < words.size(); i++){
      std::cout << words[i] << '\n';
      std::cout << "<Statement> -> <Assign> <Assign> -> <ID> = <Expression>" << '\n';
      std::cout << "Assigned correctly " <<'\n';
    }
  }
  else {
    std::cout << "Assigned incorrectly " <<'\n';
  }

  if (declaritiveTest == true){
    for (int i = 1; i < words2.size(); i++){
      std::cout << words2[i] << '\n';
      std::cout << "<Statement> -> <Declarative> <Declarative> -> <Type> <ID> <Type> -> bool | float | int  " << '\n';
      std::cout << "Declared correctly " <<'\n';
    }
  }
  else {
    std::cout << "Declaredincorrectly " <<'\n';
  }

  return 0;
}
