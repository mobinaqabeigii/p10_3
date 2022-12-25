#include<iostream>
using namespace std;
int bmm(int x,int y){
if ((x%y)!=0)
return(bmm(x=y,x%y));
else return(y);
}

int main(){
int x,y;
cout<<"enter x:";
cin>>x;
cout<<"\nenter y:";
cin>>y;
cout<<"\nbmm:"<<bmm(x,y);
}