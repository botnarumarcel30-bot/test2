#include <stdlib.h>
#include <stdio.h>

int function(int x){
	x=x-2;

	return x;
}

int main(){
	int a=30, x=0;
	
	while (a>0){
		a=function(a);
		x++;
	}
	printf("%d", x);
	return 0;	
}




