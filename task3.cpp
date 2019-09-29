#include<iostream>
using namespace std;
add(double a[],int &n,int x,int position){
	for(int i=n;i>=position;i--){
		a[i+1]=a[i];
	}
	a[position]=x;
	n++;
}
max(double a[],int n){
	double max=a[1];
	for(int i=2;i<=n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	return max;
}
add_0_behind_max_element(double a[],int &n){
	for(int i=1;i<=n;i++){
		if(a[i]==max(a,n)){
			add(a,n,0,i+1);
			i++;
		}
	}
}
min(double a[],int n){
	double min=a[1];
	for(int i=2;i<=n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	return min;
}
add_0_before_min_element(double a[],int &n){
	for(int i=1;i<=n;i++){
		if(a[i]==min(a,n)&&a[i]!=0){
			add(a,n,0,i);
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
	if(n<1){ cout<<"error(please enter n>=1)";
	}else{
		cout<<"the array: ";
		for(i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<"\nthe array after add 0 behind maximum and before minimum: ";
		add_0_before_min_element(a,n);
		
		for(i=1;i<=n;i++){
	        cout<<a[i]<<" ";
		}
	}
}
