//Find and count all the elements before which all the elements are greater than it, and after which all are smaller

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int arr[100]={0};
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int count = 0;
	// for every element
	for (int i = 0; i < n; ++i)
	{	
		int currElement = arr[i];

		bool leftGreater = true;
		bool rightSmaller = true;

		//to check if all the left elements are greater than current element
		for (int j = 0; j < i; ++j)
		{
			if(arr[j] < currElement){
				leftGreater = false;
				break;
			}
		}

		for (int k = i+1; k <n ; k++)
		{
			if(arr[k]>currElement){
				rightSmaller = false;
				break;
			}
		}

		if(leftGreater && rightSmaller){
			count++;
			cout<<currElement<<endl;
		}

		
	}




	cout<<"count : "<<count<<endl;

	return 0;
}



