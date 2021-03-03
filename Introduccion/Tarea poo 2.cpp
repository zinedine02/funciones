#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
	string a,b;
	cout<<"introduzca el valor del primer numero: "<<endl;
	cin>>a;
	cout<<"introduzca el valor del segundo numero: "<<endl;
	cin>>b;
	if(a>b){
	     cout<<a<<" es mayor "<<endl;
}
	else if(a<b){
		cout<<b<<" es mayor "<<endl;
	}
	else 
	cout<<"Error"<<endl;
	return 0;
	
}
