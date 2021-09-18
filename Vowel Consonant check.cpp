//!isalpha(c) is a function in c++

#include"bits/stdc++.h"
using namespace std;
int main()
{
   char c;
   bool isLowerCaseVowel,isUpperCaseVowel;
   cin>>c;
   isLowerCaseVowel=(c=='a' || c=='e' || c=='i' || c=='o'|| c=='u');
   isUpperCaseVowel=(c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U');
    if(!isalpha(c))
        cout<<c<<" special ch";
    else if(isUpperCaseVowel || isLowerCaseVowel)
        cout<<c<<" vowel";
    else
        cout<<c<<" consonant";
    return 0;
}
