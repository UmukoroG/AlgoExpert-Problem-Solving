#include <vector>
#include <algorithm>    
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  // Write your code here.
	vector<int> ans;
	for(int i=0; i<array.size();i++){
		int t=array[i]*array[i];
		ans.push_back(t);
	}
	//sort the array
	sort(ans.begin(), ans.end());
	
  return ans;
}
