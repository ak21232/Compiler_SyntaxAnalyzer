#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

// Function that reads the code inputted
std::vector<std::string> readFileLine(std::string fileName) {
  std::vector<std::string> wordList;
  std::fstream file;
  file.open(fileName);
  if (file.is_open()) {
    std::string line;
    while (std::getline(file, line)) {
      wordList.push_back(line);
    }
  }
  file.close();
  return wordList;
}

// Function that categorizes what is read from the input list
// into their respective lexeme type
std::vector<std::string> getWord(std::string wordlist) {
  std::vector<std::string> wordListNoComments;
  if (wordlist.find("!") == std::string::npos) {
    std::istringstream ss(wordlist);
    std::string word;
    while (ss >> word) {
      wordListNoComments.push_back(word);
    }
  }
  return wordListNoComments;
}

bool declarativeStatment(std::vector<std::string> sentence){
  bool correctSyntax = false;
  for (int i = 1; i < sentence.size(); i++){
    std::vector<std::string> wordList = getWord(sentence[i]);
    if (sentence[i].find("bool") != std::string::npos || sentence[i].find("float") != std::string::npos || sentence[i].find("int") != std::string::npos ) {
      if (wordList[1] != "+" && wordList[1] != "-" && wordList[1] != "/" && wordList[1] != "*" && wordList[1] != "%" && wordList[1] != "bool" && wordList[1] != "int" && wordList[1] != "float"){
        correctSyntax = true;
      }
      else{
        correctSyntax = false;
        break;
      }
    }
  }
  return correctSyntax;
}

bool assignmentStatment(std::vector<std::string> sentence){
  bool correctSyntax = false;
  for (int i = 1; i < sentence.size(); i++){
    std::vector<std::string> wordList = getWord(sentence[i]);
    if (wordList[0] != "bool" && wordList[0] != "float" && wordList[0] != "int" && wordList[1] == "=" && wordList[2] != "bool" && wordList[2] != "int" && wordList[2] != "float" && wordList[2] != "+" &&  wordList[2] != "-" && wordList[2] != "*" && wordList[2] != "/" && wordList[2] != "%" && (wordList[3] == "+" ||  wordList[3] == "-" || wordList[3] == "*" || wordList[3] == "/" || wordList[3] != "%") && wordList[4] != "bool" && wordList[4] != "int" && wordList[4] != "float" && wordList[4] != "+" &&  wordList[4] != "-" && wordList[4] != "*" && wordList[4] != "/" && wordList[4] != "%"){
      correctSyntax = true;
    }
    else {
      correctSyntax = false;
      break;
    }
  }
  return correctSyntax;
}
