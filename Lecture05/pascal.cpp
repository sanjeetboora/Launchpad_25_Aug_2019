//Pascal Triangle
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

int ncr(int n, int r){
	int result = fact(n)/(fact(r)*fact(n-r));
	//cout<<result<<endl;
	return result;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col <= row; col++)
		{
			int rowCcol = ncr(row,col);
			cout<<rowCcol<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}







