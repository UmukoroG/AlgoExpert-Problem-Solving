#include <vector>;
using namespace std;


bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  // Write your code here.
	int j=0;
	for(int i=0; i<array.size();i++){
		if(j==sequence.size()) //check if it finds all the digits
			return true;
		if(array[i]==sequence[j]) 
			j++;
	}
    if(j==sequence.size()) return true;
	return false;
}
