#include <iostream>
#include <cmath>
using namespace std;
int GCD(int a, int b)
{
    return b==0?a:GCD(b,a%b);
}
int lcm(int a, int b)
{
    return a*b/GCD(a,b);
}
int main()
{
    int a=5,b=15;
    cout<<"LCM of numbers "<<a<<" and "<<b <<" is "<<lcm(a,b)<<endl;
    return 0;
}