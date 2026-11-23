#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter First number"<<endl;
	cin>>a;
	cout<<"Enter Second Number"<<endl;
	cin>>b;
	char ope;
	cout<<"Select the operation to perform (+,-,*,/,%)"<<endl;
	cin>>ope;
	
	switch(ope)
	{
		case '+':
		cout<<"You choosed Addition"<<endl;
		cout<<"The addition of Inserted Numbers is "<<a+b;
		break;
	case '-' :
	cout<<"You choosed Subtraction"<<endl;
	cout<<"The subtraction of Inserted Numbers is "<<a-b;
	break;
	case'*' :
		cout<<"You choosed Multiplication"<<endl;
	cout<<"The product of Inserted Numbers is "<<a*b;
	break;
	case'/' :
		cout<<"You choosed Division"<<endl;
	cout<<"The Division of Inserted Numbers is "<<a/b;
	break;
	case'%':
	cout<<"You choosed Division"<<endl;
	cout<<"The Remainder of Inserted Numbers is "<<a%b;
	break;
	default :
		cout<<"Invalid Input"<<endl;
		break;
	}	
	return 0;
}
