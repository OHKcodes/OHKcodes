#include<iostream>
using namespace std ;
int main ()
{
	char choice ;
	int a , b , total ;
	cout<<"Enter 2 numbers ";
	cin>>a>>b ;
	cout<<"Enter your operation ";
	cin>>choice; 
	switch(choice)
	{
		case '+':
		total=a+b ;
		cout <<"\n your sum is= "<< total ;
		break;
		case '-':
		total = a-b ;
		cout<<"\n your subtraction gives = "<<total ;
		break ;
		case'/':
		total= a/b ;
		cout<<"\n your quotient is = "<<total ;
		break;
		case '*':
		total = a*b ;
		cout<<"\n your multiplied answer is = "<<total ;
		break ;
		default :
		cout<<"Invalid # "	;
	}
}