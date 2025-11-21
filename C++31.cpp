#include<iostream>
using namespace std;
class Student{
public:
	int id;
	string name;
	
	void display(){
		cout<<"ID:"<<id<<",Name:"<<name<<endl;
	}
};
int main(){
	Student s1; 	
	s1.id=101;
	s1.name="Ram";
	Student*ptr;	
	ptr=&s1;		
	
	
	ptr->display();	
	cout<<ptr->id;
}

