#include <iostream>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
            cin>>A[i];
        int min=A[0];
        int ans=1;
        for(int i=0;i<N;i++)
        {
            if(A[i]<min)
            {
                min=A[i];
                ans=i+1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}