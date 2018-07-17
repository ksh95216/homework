#include <stdio.h>
#include <stdlib.h>
typedef long long v20;
void list_init(v20 **a1);
void list_add_to_tail(v20 **a1, v20 a2);
void list_printall(v20 **a1);
int main(){

	v20 *v20[2];
	list_init(v20);
	list_add_to_tail(v20, 1);
	list_add_to_tail(v20, 2);
	list_add_to_tail(v20, 3);
	list_printall(v20);
	return 0;

}

void list_init(v20 **a1){

	*(a1+1) = 0;
	*a1 = *(a1+1);

}

void list_add_to_tail(v20 **a1, v20 a2){

	v20 *n;	
	if(!*(a1+1)){

		n = malloc(0x10);	
		*(a1+1) = n;
		*n = a2;
		*(n+1) = 0;
		*(a1) = *(a1+1);
	
	}
	else{
		v20 *t = *(a1+1);
		n = malloc(0x10);
		*(t+1) = n;
		*n = a2;
		*(n+1) = 0;
		*(a1+1) = n;
	}
}

void list_printall(v20 **a1){

	v20 *n = *(a1);
	while(n){

		printf("%d\n", *n);
		n = *(n+1);
	
	}
}


