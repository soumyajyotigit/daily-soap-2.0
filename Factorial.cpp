#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,factorial=1;
    cin>>n;
    if (n<0)
        cout<<"entered wrong";
    else{
        for(int i=1;i<=n;i++){
            factorial=factorial*i;
        }
        cout<<factorial;
    }
    return 0;
}
