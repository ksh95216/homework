#include<stdlib.h>
#include<stdio.h>
int foo(int a1);
int main(){
   
     printf("%d\n", foo(0xa));
   
}
int foo(int a1){

	if(a1 < 0){

		exit(0);

	}
	if(a1 != 1){
		

		if(a1 == 2){
			
			return 1;

		}
	
	}
	return foo(a1-1)+foo(a1-2);


}
