#include<iostream>
using namespace std;
int main()
{
 	//I will use If else and or Operator in this program
	int age;
	cout<<"Enter your Age"<<endl;
	cin>>age;
	if(age<13 || age>18)
	{
		cout<<"You are not a teenager your age is "<<age<<endl;
	}
	else
	{
		cout<<"You are a teeanager your age is "<<age;
	}
	return 0;
}
