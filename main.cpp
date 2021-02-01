#include <iostream>
#include <cstring>
#include <bits/stdc++.h>


int main() {
  std::string word;
  std::cout << "Write out your string"<< std::endl;
  std::cin>>word;
  std::cout<<word<<std::endl;

  int n = word.length();

  char arrArray[n+1];

  strcpy(arrArray, word.c_str());

  for (int i = 0; i < n; i++){
    std::cout << arrArray[i];
  }
}

