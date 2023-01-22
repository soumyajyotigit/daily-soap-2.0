#include <iostream>
using namespace std;
struct person
{
    string name;
    int empid;
    float salary;
};

int main(){
    struct person ss;
    cin>>ss.name;
    cin>>ss.empid;
    cin>>ss.salary;

    cout<<"name "<<ss.name<<endl;
    cout<<"empid "<<ss.empid<<endl;
    cout<<"salary "<<ss.salary<<endl;
    


    return 0;
}
