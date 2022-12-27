#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main () {
  std::string input;
  while(std::getline(std::cin, input)){}


  int count[26];

  for(int i = 0; i < 26; i++) {
    count[i] = 0;
  }

  for(int i = 0; i < input.length(); i++) {
    if(std::isalpha(input[i]))
      count[tolower(input[i]) - 'a']++;
  }

  for(int i = 0; i < 26; i++) {
    std::cout << char(i + 'a') << " : " << count[i] << std::endl;
  }

  return 0;
}