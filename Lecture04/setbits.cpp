#include <iostream>
using namespace std;

int countSetBits(int n){
	int count =0;

	while(n>0){
		n&1?count++:count;
		//n&1==1?count++: ;
		n=n>>1;
	}
	return count;

}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	cout<<countSetBits(n)<<endl;



}