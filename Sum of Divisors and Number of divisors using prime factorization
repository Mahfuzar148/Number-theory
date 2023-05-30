#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int> primeFactors(int n)
{
    unordered_map<int,int>factors;
    while(n%2==0)
    {
        factors[2]++;
        n = n/2;
    }
    for(int i=3;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                factors[i]++;
                n = n/i;
            }
        }
    }
    if(n>2)
    {
        factors[n]++;
    }
    return factors;
}
vector<int> sumAndNumOfDivisors(int n)
{
    unordered_map<int ,int>factors = primeFactors(n);
    vector<int>v(2,0);
    int sum = 1;
    int num = 1;
    for(auto it : factors)
    {
        sum *= (pow(it.first,it.second+1)-1)/(it.first-1);
        num *= (it.second+1);
    }
    v[0] = num;
    v[1] = sum;
    return v;
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       vector<int>v = sumAndNumOfDivisors(n);
       cout<<"Number of divisors of "<<n<<" = "<<v[0]<<endl;
       cout<<"Sum of divisors of "<<n<<" = "<<v[1]<<endl;
   }
   return 0;
}
