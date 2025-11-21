#include<iostream>
using namespace std;
int x=3;
int main(){
	int x=10;
	cout<<::x<<endl;//output is 3
	cout<<x;//output is 10
	return 0;
	
}

