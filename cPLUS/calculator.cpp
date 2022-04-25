
#include<iostream>
using namespace std;
int main()
{


    float n1,n2,ans;
    char oper;
    cout<<" enter ist number,operand,enter second number: "<<endl;
    cin>>n1>>oper>>n2;
    switch(oper){
    case'+':ans = n1+n2;
    break;
    case'-':ans = n1-n2;
    break;
    case'*':ans = n1*n2;
    break;
    case'/': ans = n1/n2;
    break;
    }

    cout<<"answer=="<<ans<<endl;
return 0;
}
