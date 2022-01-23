class Solution {
public:
    int countSubstrings(string s) {
        int count=0;
        int n=s.length();
        int r, l;
        for(int i=0; i<n;i++){
            l=r=i;
            //odd palindrone
            while(l>=0 && r<n && s[l]==s[r]){
                count+=1;
                l-=1;
                r+=1;
            }
            
            //even palindrone
            l=i;
            r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                count+=1;
                l-=1;
                r+=1;
            }
            
        }
        return count;
        
       
    }
};