//3
//44
//555
//6666
//555
//44
//3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int i=0;i<4;i++){
        for (int j=0;j<=i;j++){
            cout<<(i+3);
        }
        cout<<endl;
    }
    for(int i=3;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<(i+2);
        }
        cout<<endl;
    }
    return 0;
}
