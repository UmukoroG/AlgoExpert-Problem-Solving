class Solution {
public:
    string reverseStr(string& s){
        int n=s.length();
        for(int i=0; i<n/2;i++){
            swap(s[i],s[n-i-1]);
        }
        return s;        
    }
    bool isPalindrome(string s) {
        string newStr="";
        if(s.length()<2) return true;
        for(int i=0; i<s.length();i++){
            if(isalnum(s[i])){
                newStr+=tolower(s[i]);
            }
        }
        // cout<<newStr<<endl;
        // cout<<reverseStr(newStr)<<endl;
        return newStr==string(newStr.rbegin(), newStr.rend());
        
    }

    //Method 2
    bool isPalindrome(string s) {
        if(s.length()<2) return true;
        int l=0; 
        int r=s.length()-1;
        while(l<r){
            while(l<r && !isalnum(s[l])){
                l++;
            }
            while(r>l && !isalnum(s[r])){
                r--;
            }
            if(tolower(s[l])!=tolower(s[r])){
                        return false;
            }
            l+=1;
            r-=1;
        }
        return true;
    }
};

    
   