#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int>l ={10,20,30};
	l.push_front(5);
	l.push_back(40);
	cout<<"List elements:";
	for(int x:l)
	cout<<x<<" ";
	cout<<endl;
	l.pop_front();
	l.pop_back();
	cout<<"After pop operations:";
	for(int x:l)
	cout<<x<<" ";
	cout<<endl;
	l.push_back(25);
	l.push_back(15);
	l.sort();
	cout<<"sorted:";
	for(int x:l)
	cout<<x<<" ";
	cout<<endl;
   l.reverse();
   cout<<"Reversed:";
   for(int x:l)
   cout<<x<<"";

    return 0;
}

