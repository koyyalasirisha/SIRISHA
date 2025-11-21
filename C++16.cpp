#include<iostream>
using namespace std;
namespace Math{
	int add(int a,int b){
		return a+b;
	}
}
int main(){
   int result=Math::add(10,5);//Using scope resolution
   cout<<"Result:"<<result<<endl;
   return 0;
}

