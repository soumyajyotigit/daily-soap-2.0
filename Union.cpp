#include <iostream>
using namespace std;
union money{
    int rupee;
    char car;
    float dolar;
};
int main()
{
    union money m1;
    // cin>>m1.rupee;
    // cin>>m1.car;
    cin>>m1.dolar;

    // cout<<"rupee "<<m1.rupee<<endl;
    // cout<<"car "<<m1.car<<endl;
   cout<<"dolar "<<m1.dolar<<endl;
    return 0;    
}
