#include<iostream>
using namespace std;
class X{
public:
	X(){cout<<"X Constructor\n";}
	~X(){cout<<"X Destructor\n";}	
};
class Y  {
public:
	Y(){cout<<"Y Constructor\n";}
	~Y(){cout<<"Y Destructor\n";}	
};
class Z : public X,public Y {
public:
	Z(){cout<<"Z Constructor\n";}
	~Z(){cout<<"Z Destructor\n";}	
};


int main(){
	Z obj;
}

