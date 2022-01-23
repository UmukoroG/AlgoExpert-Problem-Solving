class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> S;
        int l=0;
        int res=0;
        for(int i=0; i<s.length();i++){
            // i -> r represents the right part of the sliding window
            while(S.find(s[i])!=S.end()){
                S.erase(s[l]);
                l+=1;
            }
            S.insert(s[i]);
            res=max(res,i-l+1);
        }
        return res;
    }
};