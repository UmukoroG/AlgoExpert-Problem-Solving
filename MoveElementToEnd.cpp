#include <vector>

using namespace std;

vector<int> moveElementToEnd(vector<int> arr, int toMove) {
  // Write your code here
	vector<int> ans;
	int count=0;
	for(int i=0;i<arr.size();i++){
		if(arr[i]==toMove){
			count++;
		}
		else if(arr[i]!=toMove){
			ans.push_back(arr[i]);
		}
	}
	for(int i=0; i<count;i++){
		ans.push_back(toMove);
	}
  return ans;
}
