#include <iostream>
#include <vector>
using namespace std;

char getNewLetter(char letter, int key){
	int newLetterCode=letter+key;
	return newLetterCode<=122 ? newLetterCode : 96 + newLetterCode %122;
}

string caesarCypherEncryptor(string str, int key) {
  // Write your code here.
	
	vector<char> newLetters;
	int newKey=key%26;
	for(int i=0; i<str.length();i++){
		newLetters.push_back(getNewLetter(str[i],newKey));
	}
  return string(newLetters.begin(), newLetters.end());
}

