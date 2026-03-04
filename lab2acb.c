#include <stdlib.h>
#include <stdio.h>

int function(int x){
	x=x-2;
	x=function(x);
	return x;
}

int main(){
	int a=30, x=0;
	
	while (a>0){
		a=function(a);
		x++;
	}
	printf("%d", i);
	return 0;	
}


