#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
	string a,b,c,d;
	cout<<"introduzca el valor del primer numero: "<<endl;
	cin>>a;
	cout<<"introduzca el valor del segundo numero: "<<endl;
	cin>>b;
    cout<<"introduzca el valor del tercer numero: "<<endl;
	cin>>d;
	if(a>b){
	     c=a;
}
	else if(a<b){
		c=b;
	}
	else 
	cout<<"error"<<endl;
	
	if(c>d){
		cout<<c<<" es mayor "<<endl;
	}
	else if(c<d){
		cout<<d<<" es mayor "<<endl;
	}
	else
	cout<<"error"<<endl;
	
	return 0;
	
}
