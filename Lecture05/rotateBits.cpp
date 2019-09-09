//Rotate b bits of a number
#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int n, b;

	cin>>n>>b;

	int result = (n>>b)|(n<<((sizeof(int)*8)-b));
	cout<<result<<endl;
	for (int i = 0; i < (sizeof(int)*8); ++i)
	{
		cout<<(n&1);
		n=n>>1;
	}
	cout<<endl;
	for (int i = 0; i < (sizeof(int)*8); ++i)
	{
		cout<<(result&1);
		result=result>>1;
	}
	cout<<endl;

	
	return 0;




}