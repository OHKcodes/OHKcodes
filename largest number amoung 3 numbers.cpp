#include<iostream>
using namespace std ;
int main ()
{
	int a , b , c , largest ;
	cout <<"\nEnter 3 numbers ";
	cin>>a>>b>>c ;
	largest = (a>b)?a:(b>c)?b:c;
	cout<<"\n The lagest number is "<<"\t"<<largest ;
}