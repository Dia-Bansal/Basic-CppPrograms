#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int ans=0;
   for(int i=0;i<=n;i++){
       int rem=n%10;
       ans=(ans*10)+rem;
       n=n/10;
   }
   cout<<ans;
    return 0;
}
