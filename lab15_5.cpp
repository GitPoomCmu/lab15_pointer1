#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *x, int *y, int *z, int *w){
    srand(time(0));
    int num = 4;
    int list[4] = {*x, *y, *z, *w};
    
    for(int i=0; i<num; i++){
        swap(list[rand()%4], list[rand()%4]);
    }
    
    *x = list[0];
    *y = list[1];
    *z = list[2];
    *w = list[3];
}

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
