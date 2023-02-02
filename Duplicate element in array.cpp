#include<bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;
void print(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                cout<<a[i];
                break;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    print(a,n);
    return 0;
}
