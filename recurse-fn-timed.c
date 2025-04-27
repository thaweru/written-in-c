#include <stdio.h>
#include <time.h>

void recurse(unsigned long long int n){
	if (n==1){
	    printf("num = 1 \n");
	}
	else{
//	    printf("not 1 ");
	    recurse(n-1);
	}
}

int main(){
	clock_t st = clock();
	unsigned long long int n;
	printf("input number:\n");
	scanf("%llu",&n);
	recurse(n);
	clock_t et = clock();
	double etime = (double)(et - st);
	etime /= CLOCKS_PER_SEC;
	printf("time elapsed: %f \n",etime);
	return 0;
}
