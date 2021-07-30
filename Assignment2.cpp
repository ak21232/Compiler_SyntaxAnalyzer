#include <iostream>
#include "Assignment2.hpp"
#include <vector>


int main(){
  std::vector<std::string> words = readFileLine("test.txt");
  std::vector<std::string> words2 = readFileLine("test2.txt");
  std::vector<std::string> words3 = readFileLine("test3.txt");
  bool assignmentTest = assignmentStatment(words);
  bool declaritiveTest = declarativeStatment(words2);
  bool arithmeticTest = arithmeticStatment(words3);

  std::cout << "\n\n";
  std::cout << "Assignment Test: " << '\n';
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
  std::cout <<"\n\n";

  std::cout << "Declarative Test: " << '\n';
  if (declaritiveTest == true){
    for (int i = 1; i < words2.size(); i++){
      std::cout << words2[i] << '\n';
      std::cout << "<Statement> -> <Declarative> <Declarative> -> <Type> <ID> <Type> -> bool | float | int  " << '\n';
      std::cout << "Declared correctly " <<'\n';
    }
  }
  else {
    std::cout << "Declared incorrectly " <<'\n';
  }
  std::cout <<"\n\n";

  std::cout << "Arithmetic Expression Test: " << '\n';
  if (arithmeticTest == true){
    for (int i = 1; i < words3.size(); i++){
      std::cout << words3[i] << '\n';
      std::cout << "<Expression> -> <Expression> + <Term> | <Expression> -<Term> | <Term>" << '\n';
      std::cout << "<Term> -> <Term> * <Factor> | <Term> / <Factor> | <Factor> " << '\n';
      std::cout << "<Factor> -> ( <Expression> ) | <ID> | <Num>" << '\n';
      std::cout << "<ID> -> id" << '\n';
      std::cout << "Arithmetic expressed correctly " <<'\n';
    }
  }
  else {
    std::cout << "Expressed incorrectly " <<'\n';
  }
  std::cout <<"\n\n";

  return 0;
}
