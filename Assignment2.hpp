#include "Assignment2_Functions.cpp"

std::vector<std::string> readFileLine(std::string fileName);

std::vector<std::string> getWord(std::string wordlist);

std::vector<std::string> removeBlankStrings(std::vector<std::string> &wordListNoComments);

bool declarativeStatment(std::vector<std::string> &sentence);

bool assignmentStatment(std::vector<std::string> &sentence);

bool arithmeticStatment(std::vector<std::string> &sentence);
