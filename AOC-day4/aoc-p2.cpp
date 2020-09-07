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
	int j=0,c[5];
	c[0]=-1;
for(int i=0;i<5;i++)
	{
		if(b[i]==b[i+1])
		{
			c[j++]=b[i];	
		}
	}
	if(c[0]==c[1]&&c[2]==c[3])
	{
		c[0]=-1;
	}
if(c[0]!=-1)
{
	
	
		for(int i=0;i<j-1;i++)
	{
		
		if(c[i]!=c[i+1])
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
else
{
	flag=-1;
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
  	cout<<pswrd(111113);
	/*
	int sum=0;
	for(int i=138307;i<=654504;i++)
	{
	int res=pswrd(i);
	sum+=res;
	if(res==1)
	{
		cout<<i<<"..";
	}
	}*/
	//cout<<sum;
return 0;
}
