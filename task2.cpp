#include <iostream>
using namespace std;
int main(){
	int n;
	int a[n],need[n];
	cout << "enter n: " ;
	cin >> n;
	cout << endl << "enter element of the array: " << endl;
	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=0;i<n;i++){
		need[i] = 0;
	}
	for (int i=0;i<n;i++){		
		if (need[i] == 0){
			int k = 0;
			for (int j=i+1;j<n;j++){
				if (a[i]==a[j]){
					if (k!=0){
						k=0;
						break;
					}
					k = j;
				}
			}
			if (k!=0) {
				need[i] = true;
				need[k] = true;
			}
		}
	}
	for (int i=0;i<n;i++){
		if (need[i]==0){
			cout << a[i] << " ";
		}
	}
	return 0;
}
