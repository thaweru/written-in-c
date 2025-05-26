#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, p=2;
	printf("Input number to be factorized:  ");
	scanf("%i", &n);
	while (n != 1){
		if (n%p == 0){
			printf("%i ", p);
		} else{
			p++;
		}
	}
	return 0;
}
