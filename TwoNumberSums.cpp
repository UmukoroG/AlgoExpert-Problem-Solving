//SOLUTION 1

#include <vector>
#include <unordered_map>
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

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
	unordered_map<int, int> map;
	vector<int> ans;
	if(array.size()==0){
		return {};
	}
	
	for(int i=0; i<array.size();i++){
		if(map.find(targetSum-array[i])!=map.end()){
			ans.push_back(targetSum-array[i]);
			ans.push_back(array[i]);
			
		}
		else{
			map[array[i]]=i;
		}
		
	}
	
  return ans;
}


