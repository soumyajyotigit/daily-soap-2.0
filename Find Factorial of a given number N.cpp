//10 = 3628800

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long fact=1;

    if (n<0)
        cout<<" an error occured";
    else{
        for(int i=1;i<=n;i++){
            fact=fact*i;
            }
    
    cout<<fact;
    }
    return 0;
}
