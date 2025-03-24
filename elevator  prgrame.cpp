#include<iostream>
using namespace std ;
int main ()
{
	int a , numppl ;
	cout <<"\n Select your floor number ";
	cin>> a ;
	if(a==1)
	cout<<" floor 1";
	if(a==2)
	cout<<" floor 2 ";
	if(a==3)
	cout<<" floor 3";
	cout <<"\n Enter # of passengers ";
	cin>>numppl ;
	if(numppl>10)
	cout<<"\a"<<" Crowded ";
    else
    cout<<"\n It is Not crowded ";
}