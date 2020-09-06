#include<iostream>

using namespace std;
int calc_fuel(int b[],int n)
{
int sum;
for(int i=0;i<n/4;i++)
{
sum+=int(b[i]/3)-2;
}
return sum;
}

int main()
{
int	a[]={13,14,15};//input
cout<<calc_fuel(a,sizeof(a));
return 0;
}

