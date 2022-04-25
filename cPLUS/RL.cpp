#include<iostream>
#include<ctype.h>
using namespace std;
int main(){

 char letter;
 int result;
 cout<<"enter a letter:"<<endl;
 cin>>letter;
 result= islower(letter);
 cout<<result<<endl;
 return 0;



}
