#include<iostream>
using namespace std;
int main()
{
int i ,num ;
int arr[5];
cout<<"Enter 5 numbers of array ";
for(i=0;i<5;i++)
cin>>arr[i];


for (int i = 0; i < 5; i++)
{
    cout<<"Enter Value for Element no "<<(i+1)<<" :\n";
    cin>>arr[i];

}
int opt;
cout<<"Which Number Do you want :\n";
cin>>opt;
for (int i = 0; i < 5; i++)
{
    if (arr[i]==opt)
    {
        cout<<opt<<" Exists at index "<<(i+1);
    }
    
}




}