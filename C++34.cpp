#include<iostream>
using namespace std;
class Animal{
	public:
		virtual void sound(){
			cout<<"Animal makes a sound"<<endl;
		}
};
class Dog:public Animal{
	public:
		void sound()override{
		cout<<"Dog barks"<<endl;
		}
};
class cat:public Animal{
	public:
		void sound()override{
		cout<<"cat meows"<<endl;
		}
};
int main(){
	Animal*a;
	Dog d;
	cat c;
	a=&d;
	a->sound();
	a=&c;
	a->sound();
	return 0;
}

