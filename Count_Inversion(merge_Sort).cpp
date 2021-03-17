#include<bits/stdc++.h>
using namespace std;

// count Inversion

/* 
	Time complexcity is O(NlogN)
	space Complexcity id O(N);
*/

int merge(int A[],int low,int mid,int high){
	int i,j,k,B[100];
	i = low;
	j = mid;
	k = low;
	int countInv = 0;
	while(i <= mid-1 and j <= high){
		if(A[i] < A[j]){
			B[k] = A[i];
			k++;
			i++;
		}
		else{
			B[k] = A[j];
			countInv += (mid - i);
			k++;
			j++;
		}
	}
	while(i <= mid-1){
		B[k] = A[i];
		k++;
		i++;
	}
	while(j <= high){
		B[k] = A[j];
		j++;
		k++;
	}

	for (int i = low; i <= high; ++i)
	{
		A[i] = B[i];
	}
	return countInv;
}

int mergeSort(int A[],int low,int high){
	int mid;
	int countInv = 0;
	if(low < high){
		mid = (low + high)/2;
	    countInv += mergeSort(A,low,mid);
		countInv += mergeSort(A,mid+1,high);

		countInv += merge(A,low,mid+1,high);
	}
	return countInv;
}



int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];	
	}

	cout<<mergeSort(arr,0,n-1);


	return 0;
}