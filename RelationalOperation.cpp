#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    bool first=(a==b);
    cout<<first<<endl;
    
    bool second=(a>=b);
    cout<<second<<endl;
    
    bool third=(a<=b);
    cout<<third<<endl;
    
    bool forth=(a>b);
    cout<<forth<<endl;
    
    bool fifth=(a<b);
    cout<<fifth<<endl;
    
    bool sixth=(a!=b);
    cout<<sixth;
    
    return 0;
    
}
