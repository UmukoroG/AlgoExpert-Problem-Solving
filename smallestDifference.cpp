#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
  // Write your code here.
	sort(arrayOne.begin(), arrayOne.end());
	sort(arrayTwo.begin(), arrayTwo.end());
	vector<int> ans;
	int min=INT_MAX;
	int p1=0;
	int p2=0;
	int currentDiff=INT_MAX;
	while(p1<arrayOne.size() && p2<arrayTwo.size()){
		int firstNum=arrayOne[p1];
		int secondNum=arrayTwo[p2];
		if(firstNum<secondNum){
			p1++;
			currentDiff=secondNum-firstNum;
		}
		else if (firstNum>secondNum){
			p2++;
			currentDiff=firstNum-secondNum;
		}
		else{//when they re equal
			return {firstNum,secondNum};
		}
		
		if(min>currentDiff){
			min=currentDiff;
			ans={firstNum,secondNum};
		}
		
	}	
  return ans;
}
