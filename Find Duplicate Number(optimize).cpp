#include<bits/stdc++.h>
using namespace std;


/*
	Time complexcity is O(N) 
	and space complexcity is O(1) 
*/

int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		a[a[i]%n] = a[a[i]%n] + n;
	}
	int count=0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]/n > 1){
			cout<<i<<endl;
		}
	}


	
}