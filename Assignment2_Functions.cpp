#include <fstream>
#include <iostream>
#include <string>
#include <vector>

// Function that reads the code inputted
std::vector<std::string> readFileLine(std::string fileName) {
  std::vector<std::string> sentenceList;
  std::fstream file;
  file.open(fileName);
  if (file.is_open()) {
    std::string line;
    while (getline(file, line)) {
      sentence.push_back(line);
    }
  }
  file.close();
  return sentence;
}

std::vector<std::string> getWord(std::string sentence) {
  std::vector<std::string> wordList;
  std::string word;
  std::istringstream iss(sentence);
  while (iss >> word) {
    wordList.push_back(word);
  }
  return wordList;
}

bool declarativeStatment(std::vector<std::string> sentence){
  bool correctSyntax = false;
  for (int i = 0; i < sentence.size(); i++){
    std::vector<std::string> wordList = getWord(sentence[i]);
    if (token[i].find("bool") != std::string::npos || sentence[i].find("float") != std::string::npos || sentence[i].find("int") != std::string::npos ) {
      if (wordList[1] != "+" && wordList[1] != "-" && wordList[1] != "/" && wordList[1] != "*" && wordList[1] != "%" && wordList[1] != "bool" && wordList[1] != "int" && wordList[1] != "float"){
        correctSyntax = true;
      }
    }
  return correctSyntax;
  }
}

bool assignmentStatment(std::vector<std::string> sentence){
  bool correctSyntax = false;
  for (int i = 0; i < sentence.size(); i++){
    std::vector<std::string> wordList = getWord(sentence[i]);
    if (token[i].find("bool") != std::string::npos || sentence[i].find("float") != std::string::npos || sentence[i].find("int") != std::string::npos ) {
      if (wordList[1] != "+" && wordList[1] != "-" && wordList[1] != "/" && wordList[1] != "*" && wordList[1] != "%" && wordList[1] != "bool" && wordList[1] != "int" && wordList[1] != "float" &&  wordList[2] == "=" && wordList[3] != "+" && wordList[3] != "-" && wordList[3] != "/" && wordList[3] != "*" && wordList[3] != "%" && wordList[3] != "bool" && wordList[3] != "int" && wordList[3] != "float"){
        correctSyntax = true;
      }
    }
  return correctSyntax;
  }
}
