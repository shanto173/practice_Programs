#include <bits/stdc++.h>
using namespace std;


/*
    Shanto ~~ A peaceful soul
*/

int recursiveSum(int n){
	if (n<=1){
		return 1;
	}
	else{
		return n+recursiveSum(n-1); 
	}
}

int main()
{
	int n;
	cin>>n;
	cout<<recursiveSum(n);
}




