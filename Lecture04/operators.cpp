#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	//cin>>n;

	//ternary operator

	//n%2==0?cout<<"even"<<endl:cout<<"odd"<<endl;

	n = 5;
	int n2 = 7;

	// int n_and_n2 = n&n2;

	// cout<<n_and_n2<<endl;


	// int n_or_n2 = n|n2;
	// cout<<n_or_n2<<endl;

	// int not_n = ~n;

	// cout<<not_n<<endl;


	// int n_leftShift_n2 = n<<n2;  // n*(pow(2,n2))

	// cout<<n_leftShift_n2<<endl;
	// int n_rightShift_n2 = n>>n2; // n/(pow(2,n2))
	// cout<<n_rightShift_n2<<endl;


// find even odd

	int num = 10;

	//if(num&1){
	if(num&1 == 1){

		cout<<"odd"<<endl;
	}
	else{
		cout<<"even"<<endl;
	}

//invalid
	// float numb = 2.3;
	// numb = numb>>1;
	// cout<<numb<<endl;

	int n_xor_n2 = n^n2;
	cout<<n_xor_n2<<endl;


	return 0;
}






