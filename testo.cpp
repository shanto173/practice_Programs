#include <bits/stdc++.h>
using namespace std;


/*
    Shanto ~~ A peaceful soul
*/


int maxSubSumArray(int arr[],int n){
	int maxSum = 0;
	int crntSum = 0;
	for (int i = 0; i < n; ++i)
	{
	
		crntSum = crntSum + arr[i];
		if(crntSum>maxSum){
			maxSum = crntSum;
		}
		else if(crntSum<0){
			crntSum = 0;
		}
	}
	return maxSum;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	cout<<maxSubSumArray(arr,n);
}




