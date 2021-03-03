#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int main(){
	int a;
	int i;
	int c=1;
  cout<<"introduce el valor del numero: "<<endl;
  cin>>a;
  for(i=1;i<=a;i=i+1){
  	c*=i;
  }
 cout<<"El "<<a<<"! es "<<c<<endl;
  return 0;
}
