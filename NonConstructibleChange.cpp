#include <vector>
#include <algorithm>
using namespace std;

int nonConstructibleChange(vector<int> coins) {
  // Write your code here.
	
	if(coins.size()==0 || (coins.size()==1 && coins[0]!=1)){
		return 1;
	}
	int min=0;
	sort(coins.begin(), coins.end());
	for(int i=0; i<coins.size(); i++){
		if(coins[i]>min+1){
			return min+1;
		}
		min+=coins[i];
	}
	
  return min+1;
}
