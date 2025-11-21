#include<iostream>
using namespace std;
int a,b;
namespace Math{
	int add(int a,int b){
		return a+b;
	}
}
int main(){
	cin>>a>>b;
   int result=Math::add(a,b);//Using scope resolution
   cout<<"Result:"<<result<<endl;
   return 0;
}

