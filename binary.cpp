#include <iostream>
using namespace std;

int binary(int a[], int l, int r, int x){
	while(r >= 1){
		int m = (l + r) / 2;
		
		if(a[m] == x)
			return m;
		else if(a[m] > x)
			r = m - 1;
		else
			l = m + 1;
	}
}

int binar(int a[], int l, int r, int x){
	if (r >= 1){
		int m = (l + r) / 2;
		
		if(a[m] == x)
			return m;
		else if(a[m] > x)
			return binar(a, l, r - 1, x);
		else
			return binar(a, l + 1, r, x);
	}
}


int main(){
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int r = sizeof(a) / sizeof(a[0]);
	int x = 9;
	
	cout << binar(a, 0, r - 1, x);
}
