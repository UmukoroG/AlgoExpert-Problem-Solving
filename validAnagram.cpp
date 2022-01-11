#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
    unordered_map<char, int> mp;
    bool res=true;
    if(s.length()!=t.length()) return false;
    if(s.length()==t.length()){
        for(int i=0; i<s.length();i++){
            mp[s[i]]++;
        }
        for(int i=0; i<t.length();i++){                
            if(mp.find(t[i])==mp.end()){
                return false;
            }
            else{
                mp[t[i]]--;
                if (mp[t[i]] == 0) {
                    mp.erase(t[i]);
                }
                
            }
        }
    }
    return mp.size()==0;
    
}

