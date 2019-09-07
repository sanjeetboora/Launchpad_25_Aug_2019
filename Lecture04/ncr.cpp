#include <iostream>
using namespace std;

int fact(int n){

	int result =1;
	for (int i = 1; i <= n; ++i)
	{
		result *= i;
	}

	return result;
}

void ncr(int n, int r){
	int result = fact(n)/(fact(r)*fact(n-r));
	cout<<result<<endl;
}

int main(int argc, char const *argv[])
{
	int n, r;
	cin>>n>>r;

	ncr(n,r);

	return 0;
}







