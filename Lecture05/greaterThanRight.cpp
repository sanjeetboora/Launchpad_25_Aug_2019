//Count the number of elements which are greater than all the elements on right side of an array

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int arr[100];
	int count =0;
	int max = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	for (int i = n-1; i>=0; i--)
	{
		if(arr[i]>max){
			count++; 
			max=arr[i];
		}
	}

	cout<<count<<endl;


	return 0;
}