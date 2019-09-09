//Search an element in given array.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int arr[10]={0};
	for (int i = 0; i < 10; ++i)
	{
		cin>>arr[i];
	}
	for (int i = 0; i < 10; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	int search;
	cin>>search;
	int i;
	bool found = false;
	for (i = 0; i < 10; i++)
	{	
		cout<<i<<" "<<arr[i]<<endl;
		if(arr[i] == search){
			found =true;
			cout<<arr[i]<<" found"<<endl;
			break;
		}
	}
	// if(i==10){
	// 	cout<<search<<" not found"<<endl;
	// }
	if(found == false){
		cout<<search<<" not found"<<endl;
	}
	if(!found){
		cout<<search<<" not found"<<endl;
	}


	return 0;
}








