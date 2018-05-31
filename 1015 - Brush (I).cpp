#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test,i=1;
   cin>>test;
   while(test--)
   {
       int t;
       cin>>t;
       long long int sum=0;
       for(int i=0;i<t;i++)
       {
           int num;
           cin>>num;
           if(num>0)
           {
                sum+=num;
           }

       }
          cout<<"Case "<<i<<": "<<sum<<endl;
          i++;

   }
    return 0;
}
