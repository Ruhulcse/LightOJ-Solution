#include<bits/stdc++.h>
using namespace std;
int main()
{
   double PI= 2*acos(0.0);
    int num;
    cin>>num;
    int i=1;
    while(num--)
    {
        double n,result,result2;
        cin>>n;
       result=PI*n*n;
       result2=(2*n)*(2*n);

       cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<result2-result<<endl;
       i++;
    }
    return 0;
}
