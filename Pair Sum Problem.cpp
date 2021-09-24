#include<bits/stdc++.h>
using namespace std;
bool pairsum(int arr[],int n,int k){
	
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (arr[i]+arr[j]==k){
				cout<<i<<" "<<j<<endl;
				return true;
			}
			
		}
	}
	return false;
}

int main()
{
	int arr[]={2,4,5,7,9,12,15};
	int k=10;

	cout<<pairsum(arr,7,k)<<endl;

	return 0;
}
