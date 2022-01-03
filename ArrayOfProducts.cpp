//solution 1
#include <vector>
using namespace std;

vector<int> arrayOfProducts(vector<int> arr) {
  // Write your code here.
	vector<int> ans;
	for(int i=0;i<arr.size();i++){
		int product=1;
		for(int j=0;j<arr.size();j++){
			if(i!=j){
				product*=arr[j];
			}
	}
		ans.push_back(product);
	}
  return ans;
}



//solution 2
vector<int> arrayOfProducts(vector<int> arr) {
  // Write your code here.
	int n=arr.size();
	vector<int> output(n);
	for(int i=0; i<arr.size();i++){
		output[i]=1;
	}
	int product=1;
	for(int i=0; i<arr.size();i++){
		output[i]=product;
		product*=arr[i];		
	}
	//start from end of the array
	int product2=1;
	for(int i=arr.size()-1; i>=0; i--){
		output[i]*=product2;
		product2*=arr[i];
	}
  return output;
}
