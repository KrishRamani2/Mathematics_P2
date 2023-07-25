#include <iostream>
#include <cmath>
using namespace std;
bool prime(int a)
{
    if(a==0 || a==1)
    {cout<<"Zero and 1 are not a prime number"<<endl;}
    else if(a<0)
    {cout<<"Number is Neagtive"<<endl;}
    int count =0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {count++;}
    }
    if(count>2)
    {cout<<"Not a prime number "<<endl;}
    else {cout<<"Prime Number"<<endl;}
    return a;
}
int main()
{
    cout<<prime(7);
}