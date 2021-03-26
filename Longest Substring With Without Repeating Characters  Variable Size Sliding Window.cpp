#include<bits/stdc++.h>
using namespace std;

 


int main(){

	string str;
	cin>>str;

	int i=0,j=0;
	int mx = INT_MIN;
	map<char,int> mp;
	while(j < str.size()){
		mp[str[j]]++;

		if(mp.size() == j-i+1){
			mx = max(mx,j-i+1);
			j++;
		}
		else if(mp.size() < j-i+1){
			while(mp.size() < j-i+1){
				mp[str[i]]--;
				if(mp[str[i]] == 0){
					mp.erase(str[i]);
				}
				i++;
			}
			j++;
		}
	}
	cout<<mx;
}
