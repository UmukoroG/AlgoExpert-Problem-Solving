#include <vector>
#include <set>
using namespace std;

int firstDuplicateValue(vector<int> arr) { 
	set<int> seen;
	set<int>::iterator it;
	//check if it contains the value
	for(int i=0; i<arr.size();i++){
		it=seen.find(arr[i]);
		if(it!=seen.end()){
				return arr[i];
		}
		seen.insert (it,arr[i]);
	}
	return -1; 
}
