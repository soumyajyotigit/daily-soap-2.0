// C++ program to reverse a string using stack
#include <bits/stdc++.h>
using namespace std;

void recursiveReverse(string &str)
{
       int n=str.length();
       for(int i=0;i<n/2;i++){
        swap(str[i],str[n-i-1]);
       }
}

// Driver program
int main()
{
    string str ;
    cin>>str;
    recursiveReverse(str);
    cout << str;
    return 0;
}
