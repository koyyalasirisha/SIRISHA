#include<iostream>
using namespace std;
class Number{
	private:
		int value;
		public:
			Number(int v=0){
				value = v;
			}
			
			friend Number operator+(const Number&n1,const Number&n2);
			
			friend Number operator-(const Number&n);
			void display()const{
			cout<<"value:"<<value<<endl;
			}
};

Number operator+(const Number&n1,const Number&n2){
	return Number(n1.value+n2.value);
	
}

Number operator-(const Number&n){
return Number(-n.value);
}
int main(){
	Number num1(15),num2(25),result;

	result=num1+num2;
	cout<<"Result of num1+num2:";
	result.display();
	
	result=-num1;
	cout<<"result of -num1:";
	result.display();
	return 0;
}

