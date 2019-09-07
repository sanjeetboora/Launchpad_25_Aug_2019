#include <iostream>
using namespace std;


int rectArea(int length, int width, char ch, int val = 10){
	int area = length*width;
	cout<<length<<endl;
	cout<<width<<endl;
	cout<<ch<<endl;
	cout<<val<<endl;

	return area;
}

int countDigits (int n){

	int digits =0;
	while(n!=0){
		n = n/10;
		digits++;
	}

	return digits;
}



int main(int argc, char const *argv[])
{

	int num = 6578;

	// countDigits(num); // simple call
	// cout<<countDigits(num)<<endl;

	// int num1 = countDigits(num);
	
	// int square = num*num;
	// cout<<square<<endl;

	// cout<<countDigits(square)<<endl;

	int area = rectArea(10,9,'a', 15);
	cout<<area<<endl;



	return 0;
}