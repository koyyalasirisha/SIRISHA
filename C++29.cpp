#include<iostream>
using namespace std;
class A{
public:
	A(){cout<<"A Constructor\n";}
	~A(){cout<<"A Destructor\n";}	
};
class B : public A {
public:
	B(){cout<<"B Constructor\n";}
	~B(){cout<<"B Destructor\n";}	
};
class C : public A {
public:
	C(){cout<<"C Constructor\n";}
	~C(){cout<<"C Destructor\n";}	
};
class D:public A{
public:
	D(){cout<<"D Constructor\n";}
	~D(){cout<<"D Destructor\n";}	
};


int main(){
	D obj;
	return 0;
}

