//CodeChef Problem
//ATM
#include<iostream>
using namespace std;
#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
    int X;
    float Y;
    float bank_recharge=0.50;
    cin>>X;
    cin>>fixed>>setprecision(2)>>Y;
    if(X+bank_recharge<=Y && X%5==0)
      {
        float withdrawl=Y-(X+bank_recharge);
        cout<<fixed<<setprecision(2)<<withdrawl<<endl;
      }
    else if(X+bank_recharge<=Y && X%5!=0)
      {
        cout<<fixed<<setprecision(2)<<Y<<endl;
      }
    else
      {
        cout<<Y<<endl;
      }
	return 0;
}