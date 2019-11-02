#include <iostream>
#include <vector>

using namespace std;

class stack
{
	vector<int> v;
public:
	void push(int data){
		v.push_back(data);
	}
	int pop(){
		if(v.empty()){
			cout<<"stack is underflow"<<endl;
			return -1;
		}
		int topElement = top(); 
		 v.pop_back();
		 return topElement;
	}
	int top(){
		if(v.empty()){
			cout<<"stack is underflow"<<endl;
			return -1;
		}
		return v[v.size()-1];
	}
	
	
};

