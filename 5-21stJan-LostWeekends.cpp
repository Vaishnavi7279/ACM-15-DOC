//CodeChef Problem
//Lost Weekends Problem
#include <bits/stdc++.h>
using namespace std;
bool lost()
{
	 int temp,p, sum=0;
	 for(int i=0; i<5; i++)
        {
	 	  cin >> temp;
	 	  sum+=temp;
	    }
     cin >> p;
     return sum*p>120;
}
int main()
{
	int testCase; 
	cin >> testCase;
	while(testCase--)	
    {
		if(lost())
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
	return 0;
}