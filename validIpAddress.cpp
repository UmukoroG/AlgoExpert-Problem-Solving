#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isValidPart(string str){
	int stringAsInt=stoi(str);
	if(stringAsInt>255){
		return false;
	}
	return str.length() == to_string(stringAsInt).length();
}

string join(vector<string> strings){
	string s;
	for(int l=0;l<strings.size();l++){
		s+=strings[l];
		if(l<strings.size()-1){
			s+=".";
		}
	}
	return s;
}

vector<string> validIPAddresses(string str) {
  // Write your code here.
	vector<string> ipAddressFound;
	for(int i=1; i<min((int)str.length(),4);i++){
		vector<string> currentIpAddressParts={" "," "," "," "};
		
		currentIpAddressParts[0]=str.substr(0,i);
		if(!isValidPart(currentIpAddressParts[0])){
			continue;
		}
		for(int j=i+1; j<i+min((int)str.length()-i,4);j++){
			currentIpAddressParts[1]=str.substr(i,j-i);
			if(!isValidPart(currentIpAddressParts[1])){
				continue;
			}
			for(int k=j+1; k<j+min((int)str.length()-j,4);k++){
				currentIpAddressParts[2]=str.substr(j,k-j);
				currentIpAddressParts[3]=str.substr(k);
				
				if(isValidPart(currentIpAddressParts[2]) && isValidPart(currentIpAddressParts[3])){
					ipAddressFound.push_back(join(currentIpAddressParts));
				}
			}
		}		
	}
  return ipAddressFound;
}

