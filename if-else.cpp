#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a>='A'&& a<='Z'){
        cout<<"This is Upper Case"<<endl;
    }
    else if(a>='a'&& a<='z'){
        cout<<"This is Lower Case"<<endl;
    }
    else if(a>='0'&& a<='9'){
        cout<<"This is a digit"<<endl;
    }
    return 0;
}
