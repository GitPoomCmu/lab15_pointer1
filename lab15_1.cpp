#include <iostream>
using namespace std;

int n = 5;

int main(){
    int a = 5;
    char b = 'A';
    char &c = b;
    
    int *x = &a;
    char *y = &b;
    int **z = &x;
	
	for(int i=0; i<n; i++){
	    cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;
	    if(i==0){
	        cout << &a << " " << &b << " " << &c << " " << &x << " " << &y << " " << &z << endl;
	        c = 'F';
	    }
	    if(i==1) *y = 'W';
	    if(i==2) *x = 6;
	    if(i==3) **z = 7;
	}
	
	return 0;
}
