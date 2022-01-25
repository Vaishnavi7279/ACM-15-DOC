//CodeChef Problem
//Finding Sqaure Roots
#include <iostream>
#include<math.h>
using namespace std;
int main() 
{
	int t,n,i,a;
	int arr[50];
	cin>>t;
	for(i=0; i<t; i++)
	   {
	      cin>>n;
	      arr[i]=sqrt(n);
	   }
	for(i=0; i<t; i++)
	   cout<<arr[i]<<endl;
	return 0;	
}