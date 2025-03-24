#include<iostream>
using namespace std ;
int main ()
{

	int lucky ;
	cout<<"Enter your lucky number from 1-4  ";
	cin>>lucky  ;
	
	switch(lucky)
	{
	
	case 1 :
	cout<<"try Again ";
	break ;
	case 2:
	cout<<"try again ";
	break ;
	case 3 :
	cout<<"you won 100000  RS  ";
	break;
	case 4 :
	cout<< "Try again ";
	break ;
	default: 
	cout<<"invalid number ";
	break;
	}
}