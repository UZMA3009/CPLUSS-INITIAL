#include<iostream>
using namespace std;
int main(){
  int a = 0, b= 1,result,i,num;
cout<<"enter the no. of terms:  "<<endl;
cin>>num;
  for(i =0;i<=num;i++){


    result=a+b;

    a=b;
    b=result;
    cout<<result<<endl;
  }



}
