//linearly traverse array and linearly sorted array

#include<bits/stdc++.h>
using namespace std;
bool pairsum(int arr[],int n,int k){
	
	int low=0;
	int high=n-1;
	while(low<high){
		if(arr[low]+arr[high]==k){
			cout<<low<<" "<<high<<endl;
			return true;
		}else if(arr[low]+arr[high]>k){
			high--;
		}
		else{
			low++;
		}
	}
	return false;
}

int main()
{
	int arr[]={2,4,5,7,9,12,15};
	int k=11;

	cout<<pairsum(arr,7,k)<<endl;

	return 0;
}
