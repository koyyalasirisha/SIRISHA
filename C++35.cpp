#include<iostream>
using namespace std;
template <typename T>
T getMax(T a,T b){
	return(a>b)?a:b;
}
int main(){
	cout<<getMax<int>(10,20)<<endl;
	cout<<getMax<double>(3.5,7.2)<<endl;
	cout<<getMax<char>('A','Z')<<endl; 
	
	cout<<getMax(100,200); 
	cout<<getMax(5.5,2.2); 
	
	return 0;
}

