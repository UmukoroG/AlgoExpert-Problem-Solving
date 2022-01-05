using namespace std;
#include <vector>

bool isMonotonic(vector<int> arr){
  // Write your code here.
	if(arr.size()==0 || arr.size()==1){
		return true;
	}
	int count=0;
	int bo=0;
	for(int i=0; i<arr.size();i++){
		//decreasing
		if(arr[i]<arr[i+1] || arr[i]==arr[i+1]){
			bo=1;
			count++;
		}
	}
	for(int i=arr.size(); i>0; i--){
		if(arr[i]<arr[i-1]){
			bo=1;
			count++;
		}
	}
	if(bo==1 && count==arr.size()){
		return true;
	}
  return false;
}
