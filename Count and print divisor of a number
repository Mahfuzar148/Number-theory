#include<bits/stdc++.h>
using namespace std;
set<int>s;
void divisor(int n){
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            s.insert(i);
            s.insert(n/i);
        }
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        divisor(n);
        cout<<s.size()<<endl;
        for(auto it : s) cout<<it<<" ";
        s.clear();
        cout<<endl;
    }
    return 0;
}
