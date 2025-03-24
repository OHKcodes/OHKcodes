#include<iostream>
using namespace std ;
int main ()
{
	int array[]={12,34,56,78,90},i,max=0 ;
	for(i=0;i<5;i++)
	{
	if(max<array[i])
	max=array[i];
	}
	cout<<max;
	
}