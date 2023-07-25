#include <iostream>
#include <cmath>
using namespace std;
int GCD(int a, int b)
{
    return b==0?a:GCD(b,a%b);
}
int main()
{
    int a=5,b=15;
    cout<<"GCD of numbers "<<a<<" and "<<b <<" is "<<GCD(a,b)<<endl;
    return 0;
}