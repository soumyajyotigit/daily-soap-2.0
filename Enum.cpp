#include <iostream>
using namespace std;
int main()
{
    enum Meal{ram , shyam, jadu, madu};
    
    // cout<<ram<<endl;
    // cout<<madu<<endl;
    // cout<<jadu<<endl;
    // cout<<shyam<<endl;

    Meal m1=ram;
    Meal m2=madu;
    // Meal m1=shyam;
    // Meal m1=jadu;
    // Meal m1=madu;
    cout<<m1;
    cout<<m2;
    return 0;    
}
