using namespace std;
#include <unordered_map>
#include <string>

int firstNonRepeatingCharacter(string str) {
  // Write your code here.
	unordered_map<char, int> mp;
	
	for(int i=0; i<str.size(); i++){
		if(mp.find(str[i])==mp.end()){
			mp[str[i]]=0;
		}
		mp[str[i]]++;
	}
	
	for(int i=0; i<str.length();i++){
		if(mp[str[i]]==1){
			return i;
		}
	}
  return -1;
}
