#include<iostream>
using namespace std;
remove_element(int a[],int &n,int position){
	for(int i=position;i<=n;i++){
		a[i]=a[i+1];
	}
	n--;
}
remove_duplicate_elements(int a[],int &n){
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]==a[j]){
				remove_element(a,n,j);
			}
		}
	}
}
main(){
	int a[1000],n,i;
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
		cout<<"\nthe array after removing all neighboring identical elements,leaving their first occurrences: ";
		remove_duplicate_elements(a,n);
		for(i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
	}
}
