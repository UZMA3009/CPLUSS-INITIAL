#include<iostream>
using namespace std;
int main(){
int arr[20],num,i, maxn, minn;
cout<<"enter the size of array:"<<endl;
cin>>num;
cout<<"enter the elements of array :"<<endl;
for(i=0;i<num;i++){

    cin>>arr[i];}
    maxn=arr[0];
    for(i=0;i<num;i++){
            if(maxn <arr[i])
            maxn=arr[i];
    }
    minn=arr[0];
    for(i = 0;i<num;i++)
    {

        if(minn>arr[i])
            minn=arr[i];

    cout<<"largest"<<maxn<<endl;
    cout<<"smallest"<<minn<<endl;
    return 0;



}
}







