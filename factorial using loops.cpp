#include<iostream>
using namespace std ;
int main ()
{
	long int i,n, factorial=1   ; 
	cout<<"enter the number = ";
	cin>>n ;
	for  (i=n ;i>=1; i-- )
{
	factorial = i*factorial; 
}
	cout<<"Factorial of youe # is =  "<<factorial  ;
	
}