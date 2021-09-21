#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,x1,x2,discriminant,realPart,imaginaryPart;
    cin>>a>>b>>c;
    discriminant=b*b-4*a*c;
    
    if(discriminant>0)
    {
      x1=(-b+ sqrt (discriminant))/(a*a);
      x2=(b+ sqrt (discriminant))/(a*a);
      cout<<"roots are real and different"<<endl;
      cout<<"x1"<<x1<<endl;
      cout<<"x2"<<x2<<endl;
    }
    else if (discriminant==0)
    {
      cout<<"roots are real and same";
      cout<<-b/2*a;
    }
    else
    {
      realPart=-b/2*a;
      imaginaryPart=sqrt(discriminant)/2*a;
      cout<<"roots are complex and different"<<endl;
      cout<<"x1"<<realPart<<"+"<<imaginaryPart<<endl;
      cout<<"x2"<<realPart<<"-"<<imaginaryPart<<endl;
    }

    return 0;
}
