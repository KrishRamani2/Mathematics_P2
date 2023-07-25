#include <iostream>
using namespace std;
int findTrailingZeros(int n)
{
	if (n < 0) 
		return -1;
	int count = 0;
	for (int i = 5; n / i >= 1; i *= 5)
		count += n / i;

	return count;
}
int main()
{
    int n;
    cout<<"Enter your number";
    cin>>n;
    cout << "Count of trailing 0s in " << n << "! is "<< findTrailingZeros(n);
	return 0;
}