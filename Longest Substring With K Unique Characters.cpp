#include<bits/stdc++.h>
using namespace std;

 


int main(){

	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int k;
		cin>>k;

		int i=0,j=0;
		int mx = INT_MIN;
		map<char,int> mp;

		while(j < str.size()){

			mp[str[j]]++;
			if(mp.size() < k){
				j++;
			}
			else if(mp.size() == k){
				mx = max(mx,j-i+1);
				j++;
			}
			else if(mp.size() > k){
				while(mp.size() > k){
					mp[str[i]]--;
					if(mp[str[i]] == 0){
						mp.erase(str[i]);
					}
					i++;
				}
				j++;
			}
		}
		cout<<mx<<endl;

	}
}
