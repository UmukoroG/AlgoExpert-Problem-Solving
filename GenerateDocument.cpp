using namespace std;
#include <unordered_map>
#include <string>

bool generateDocument(string characters, string document) {
  // Write your code here.
	unordered_map<char, int> mp;
	
	for(int i=0; i<characters.length();i++){
		if(mp.find(characters[i])==mp.end()){
			mp[characters[i]]=0;		
		}
		mp[characters[i]]+=1;
	}
	
	for(int i=0; i<document.length();i++){
		if(mp.find(document[i])==mp.end() || mp[document[i]]==0){
			return false;
		}
		mp[document[i]]-=1;
	}	
  return true;
}
