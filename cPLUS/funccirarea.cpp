#include<iostream>
using namespace std;
int main(){
double radius;
cout<<"enter the radius :"<<endl;
cin>>radius;
cout<<"area of circle=="<<circarea(radius)<<endl;

float circarea(float r){
const PI =3.1415;
return PI*r*r;
}}
