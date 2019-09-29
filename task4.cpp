#include<iostream>
using namespace std;
add(double a[],int &n,int x,int position){
	for(int i=n;i>=position;i--){
		a[i+1]=a[i];
	}
	a[position]=x;
	n++;
}
add0_behind_negative_element(double a[],int &n){
	for(int i=1;i<=n;i++){
		if(a[i]<0){
			add(a,n,0,i+1);
			i++;
		}
	}
}
main(){
	double a[1000];
	int n,i;
	cout<<"enter the size of the array n(n>=1): "; cin>>n;
	for(i=1;i<=n;i++){
		cout<<"enter value a"<<i<<" "; cin>>a[i];		
	}
	if(n<1){ cout<<"error(please enter n<=1)";
	}else{
		add0_behind_negative_element(a,n);
		for(i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
	}
}
