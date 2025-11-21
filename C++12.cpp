#include<iostream>
using namespace std;
class product{
	public:
			int a,b;
			void create(){
			cin>>a>>b;
		}
		void display(){
			cout<<"a:"<<a<<" "<<"b: "<<b<<" "<<"product: "<<a*b<<endl;
		}
};
int main(){
	product p1;
	product p2;
	p1.create();
	p1.display();
	p2.create();
	p2.display();
	return 0;
	}

