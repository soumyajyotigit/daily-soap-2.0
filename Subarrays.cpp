//subarrays of an array
#include"bits/stdc++.h"
using namespace std;

void subarray(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
                cout<<arr[k]<<" ";
            cout<<endl;
        }
    }
    
}
int main()
{
    // int arr[] = {1, 2, 3, 4};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // cout << "All Non-empty Subarrays\n";
    // subarray(arr, n);
    // return 0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << "All Non-empty Subarrays\n";
    subarray(arr,n);
   
    return 0;
}
