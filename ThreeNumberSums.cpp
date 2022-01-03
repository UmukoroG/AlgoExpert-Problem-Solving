#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> arr, int targetSum) {
  // Write your code here.		
	sort(arr.begin(), arr.end());
	vector<vector<int>> ans;
	for(int i=0;i<arr.size()-2;i++){
		int l=i+1;
		int r=arr.size()-1;
		int cn=arr[i];
		while(l<r){
			int cs=cn+arr[l]+arr[r];
			if(cs==targetSum){
				ans.push_back({cn,arr[l],arr[r]});
				l++;
				r--;
			}
			else if(cs<targetSum)l++;
			else if(cs>targetSum)r--;
		}		
	}
  return ans;
}
