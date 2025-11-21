#include<iostream>
using namespace std;
int global=5;
void display(){
	cout<<global<<endl;
}
int main(){
	display();
	global=10;
	display();
	return 0;
}

