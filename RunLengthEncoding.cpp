using namespace std;
#include <vector>
#include <string>

string runLengthEncoding(string str) {
  // Write your code here.
	vector<char> encodedStringChar;
	int currentRunLength= 1;
	
	for(int i=1; i<str.length();i++){
		char currentChar=str[i];
		char previousChar=str[i-1];
		
		if(currentChar != previousChar || currentRunLength ==9){
			encodedStringChar.push_back(to_string(currentRunLength)[0]);
			encodedStringChar.push_back(previousChar);
			currentRunLength=0;
		}
		currentRunLength++;
	}
	
	//the last run(the last character)
	encodedStringChar.push_back(to_string(currentRunLength)[0]);
	encodedStringChar.push_back(str[str.size()-1]);
	
	string encodedString(encodedStringChar.begin(), encodedStringChar.end());
	
	return encodedString;
}
