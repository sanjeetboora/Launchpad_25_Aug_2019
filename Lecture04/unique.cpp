#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int xor_result = 0;
	while(n != -1){

		xor_result = xor_result^n;
		cin>>n;
	}
	cout<<xor_result<<endl;
	
	return 0;
}
