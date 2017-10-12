#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int lli;
 
int main() {
	// your code goes here
	lli t;
	cin>>t;
	while(t--)
	{
	    lli n;
	    cin>>n;
	    
	    lli a[n];
	    
	    lli i;
	    
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    lli p[n],s[n];
	    s[n-1]=a[n-1];
	    p[0]=a[0];
	    
	    for(i=1;i<n;i++){
	    p[i]=a[i]+p[i-1];
	    s[n-i-1]=a[n-i-1]+s[n-i];
	    }
	    i=0;
	    lli min=p[i]+s[i];
	    lli index=1;
	    
	   // for(i=0;i<n;i++)
	   //cout<<s[i]<<" ";
	   
	   //cout<<endl;
	    
	   // cout<<endl;
	    //cout<<min<<" "<<index<<endl;
	    
	    for(i=0;i<n;i++)
	    {
	       //cout<<p[i]+s[n-1-i]<<endl;
	        if((p[i]+s[i])<min)
	        {
	            min=p[i]+s[i];
	            index=i+1;
	        }
	    }
	       cout<<index<<endl;
	       
	}
	return 0;
}