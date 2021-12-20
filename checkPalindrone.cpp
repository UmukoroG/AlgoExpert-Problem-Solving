using namespace std;
#include <string>

bool isPalindrome(string str) {
  // Write your code here.
	int n=str.length();
	string strCopy=str;
	
	//revere the string
	for (int i = 0; i < n / 2; i++){			
        swap(strCopy[i], strCopy[n - i - 1]);
	}

	if(str==strCopy) return true;
	
  return false;
}
