#include<stdc++.h>
using namespace std;
int main()
{
	int n,t;
	int s[5]={0,0,0,0,0};
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		s[0]++;
		else if(a[i]==2)
		s[1]++;
		else if(a[i]==3)
		s[2]++;
		else if(a[i]==4)
		s[3]++;
		else 
		s[4]++;
	}
	int m=s[0];
		for(int i=1;i<5;i++)
		if(m<s[i])
		{
		m=s[i];
		t=i;
	}
	cout<<t+1;
		
}
