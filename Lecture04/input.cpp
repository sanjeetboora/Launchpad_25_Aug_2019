#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char ch;

	cin>>ch;
//cin
	// while(ch!='$'){
	// 	cout<<ch;
	// 	cin>>ch;
	// }
	// cout<<endl;

	// int num;
	// bool flag;
	// cin>>num>>flag;
	// cout<<ch<<endl;
	// cout<<num<<endl;
	// cout<<flag<<endl;

//cin.get()

	// while(ch!='$'){
	// 	cout<<ch;
	// 	cin.get(ch);
	// }
	// cout<<endl;

//EOF
	while(scanf("%c",&ch)!=EOF){
		cout<<ch;
	}
	cout<<endl;



	return 0;
}