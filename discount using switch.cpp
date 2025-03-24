#include<iostream>
using namespace std ;
int main ()
{
  int bill, discount  ;
  char   choice ;
  cout<< " Enter a if bill is 1-500   ";
  cout<<"Enter b if bill is from 500-1000  ";
  cin>> choice  ;
  cout<< "enter total amount of bill ";
  cin>>bill ;
   switch (choice)
  {
  	case 'a':
  	discount = bill * 0.05 ;
  	cout<<"your discount is "<<discount ;
  	break;
  	case 'b':
  	discount=bill*0.1; 
    cout <<"Your discount is = "<<discount ;
  	break ;
  	default :
  	cout<<" No discount ";
  }
}
  			
  
  
  