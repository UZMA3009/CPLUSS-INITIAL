
#include<iostream>
using namespace std;
int main(){

unsigned int number,j,result,fact =1;
cout<<"enter the number :";
cin>>number;


for(int j = number;j>0;j--)
    fact = fact*j;
cout<<fact<<endl;




}
