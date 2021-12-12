//SOLUTION 1

#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
	vector<int> ans;
	
	if(array.size()==0){
		return {};
	}
	
	for(int i=0; i<array.size();i++){
		for(int j=i+1;j<array.size();j++){
			if(array[i]+array[j]==targetSum){
				ans.push_back(array[i]);
				ans.push_back(array[j]);				
			}
		}
	}
  return ans;
}

// SOLUTION 2


