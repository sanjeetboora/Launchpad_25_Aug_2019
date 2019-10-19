#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[100] = {0};
	int n = 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = n-i;
	}

	clock_t startTime = clock();
	sort(arr, arr+n);
	clock_t endTime = clock();

	cout<<endTime - startTime<<endl;

	return 0;
}