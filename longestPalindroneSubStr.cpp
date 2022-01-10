using namespace std;
#include <string>

string longestPalindromicSubstring(string str) {
  // Write your code here. //partially correct
	string ans="";
	int l,r;
	int n=str.length();
	int length=0;
	for(int i=0; i<n; i++){
		l=r=i;
		while(l>=0 && r<n && str[l]==str[r]){//odd
			if((r-l+1) > length){
				ans=str.substr(l,r+1);
				length=r-l+1;
			}
			l-=1;
			r+=1;
		}
		l=i;
		r=i+1;
		while(l>=0 && r<n && str[l]==str[r]){//even
			if((r-l+1) > length){
				ans=str.substr(l,r+1);
				length=r-l+1;
			}
			l-=1;
			r+=1;
		}
	}
		
	return ans;
}
