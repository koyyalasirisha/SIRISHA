#include<iostream>
using namespace std;
int main()
{
	int m;
	cin>>m;
	if(m>=90){
		cout<<"O grade";
	}
	else if (m>=80){
		cout<<"A++ grade";
    }
    else if(m>=70){
    	cout<<"A grade";
	}
    else if(m>=60){
    	cout<<"B grade";
	}else{
		cout<<"fail";
	}
	return 0;
}

