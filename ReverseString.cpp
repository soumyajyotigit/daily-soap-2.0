#include <cstring>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void reverse(string str){
    for(int i=str.length()-1;i>=0;i--)
    cout<<str[i];
}

int main()
{
    string str;
    cin>>str;
    reverse (str);
    return 0;

}
