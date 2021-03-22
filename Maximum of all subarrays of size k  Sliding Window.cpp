#include<bits/stdc++.h>
using namespace std;

 


int main(){

	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int k;
	cin>>k;

	vector<int> v;
	list<int> l;
	int i=0,j=0;

	while(j < n){
		while(l.size() > 0 and l.back() < a[j]){
			l.pop_back();
		}
		l.push_back(a[j]);

		if(j-i+1 < k){
			j++;
		}
		else if(j-i+1 == k){
			v.push_back(l.front());
			if(l.front() == a[i]){
				l.pop_front();
			}
			i++;
			j++;
		}
	}

	for (int i = 0; i < (n-k+1); ++i)
	{
		cout<<v[i]<<" ";
	}


}
