#include<iostream>
using namespace std;
class Number {
	private:
		int value;
	public:
		
		Number(int v=0){
			value = v;
		}
		
		Number operator-(){
			return Number(-value);
		}
		
		Number operator+(const Number&other){
	return Number(this->value+other.value);	
	}
	void display(){
			cout<<"Value:"<<value<<endl;
		}
};
int main(){
	Number num1(10),num2 (20),result;
	
	result=num1 +num2;
	cout<<"Result of num1 +num2:";
	result.display();
	
	result=-num1;
	cout<<"Result of -num1:";
	result.display();
	return 0;
}

