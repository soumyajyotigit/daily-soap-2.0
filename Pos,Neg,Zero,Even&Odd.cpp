#include<iostream>
using namespace std;
int main()
{
    int pos=0,neg=0,odd=0,even=0,zero=0;
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
        if (arr[i]>0)
            pos++;
        else if(arr[i]<0)
            neg++;
        else if(arr[i]==0)
            zero++;
        else if(arr[i]%2==0)
            even++;
        else
            odd++;
        
    }
    cout<<"positive-"<<pos<<" negetive-"<<neg<<" zero-"<<zero<<" even-"<<even<<" odd-"<<odd<<endl;
    
    return 0;
}
