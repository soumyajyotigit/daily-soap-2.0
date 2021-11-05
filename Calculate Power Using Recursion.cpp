#include<bits/stdc++.h>
using namespace std;

int calpower(int base,int power)
{
    int result;
    
    if(power!=0){
        result=pow(base,power);
        return result;
        
    }
    else 
        return 1;
    

}
int main()
{
    int base,power,result;
    cin>>base>>power;
    cout<<calpower(base,power);
    return 0;

}
