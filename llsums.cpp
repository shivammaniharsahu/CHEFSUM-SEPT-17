#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	lli t,n,i;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		lli a[n]={0},curr,s=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&curr);
			s=s+curr;
			a[i]=s;
		}
		lli min=3*s,f,temp;
		for(i=0;i<n;i++)
		{
			lli d=0;
			if(i>0)
			d=a[i-1];
			temp=a[i]+s-d;
			if(min>temp)
			{
				min=temp;
				f=i+1;
			}
		}
		printf("%lld \n",f);
	}
	return 0;
}
