#include <iostream>
using namespace std;


int main()
{
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    int m=INT_MIN;
    int n=INT_MAX;

    for(int i=0;i<3;i++){
        m=max(m, arr[i]);
    }
    cout<<"large "<<m<<endl;
    for(int i=0;i<3;i++){
        n=min(n,arr[i]);
    } 
    cout<<"small "<<n<<endl;

    return 0;

}
