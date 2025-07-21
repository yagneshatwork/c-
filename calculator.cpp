#include <iostream>
using namespace std;
int main() {
	int a,b,x;
	cout<<"enter the no. a:";
	cin>>a;
	cout<<"enter the no. b:";
	cin>>b;
	cout<<"choose the arithmetic opprator\n"
	      "1=+\n"
	      "2=-\n"
	      "3=*\n"
	      "4=/\n"
	      "x=";
	      cin>>x;
    switch (x){
		case 1:
		cout<<"the addition is:"<<a+b;
		break;
		case 2:
		cout<<"the subtraction is:"<<a-b;
		break;
		case 3:
		cout<<"the multiplication is:"<<a*b;
		break;
		case 4:
		cout<<"the division is:"<<a/b;
		break;
	}
    return 0;
}

