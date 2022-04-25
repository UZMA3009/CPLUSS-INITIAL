#include<iostream>
using namespace std;
int main()
{

    char var;
    int a,b,c,d,result1,result2;
    cout<<"enter the ist fraction=";
    cin>> a >> var >>b;
    cout<<"enter 2nd fraction=";
    cin>>c >> var >> d;
    result1 = (a*d)+(b*c);
    result2 = b*d;
    cout<<"Result =="<<result1<<"/"<<result2<<endl;
}
