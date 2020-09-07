#include<iostream>
using namespace std;
int pswrd(int n)
{
	int b[6];
	int a=n;
	for(int i=5;i>=0;i--)
	{
		int x=0;
		x=a%10;
		b[i]=x;
		a=(a-x)/10;
	}
	int flag=1;
	
	
	for(int i=0;i<5;++i)
	{
		if(b[i]>b[i+1])
		{
			flag=-1;
			break;
		}
	}
if(flag==1)
{
for(int i=0;i<5;i++)
	{
		
		if(b[i]==b[i+1])
		{
			flag=1;
			break;	
		}
		else
		{
			flag=-1;
		}
	}
	
}
	if(flag==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
	
}
int main()
{
	int sum=0;

	for(int i=138307;i<=654504;i++)
	{
	int res=pswrd(i);
	sum+=res;
	}
	cout<<sum;
return 0;
}
