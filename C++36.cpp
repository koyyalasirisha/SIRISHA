#include<iostream>
using namespace std;

template <class T>
class Box{
	private:
		T value;
	public:	
		Box(T v){
			value=v;
		}
		void display(){
			cout<<"Value:"<<value<<endl;
		}
};
int main(){
	Box<int>intBox(10);  
	Box<double>doubleBox(3.14);  
	Box<string>strBox("Hello");  
	intBox.display();
	doubleBox.display();
	strBox.display();
	return 0;
}

