#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	size_t bytes_read, size = 10;
	char *string;
	printf("Please enter a string: ");
	
	string = (char*) malloc(size);
	bytes_read = getline(&string, &size, stdin);
	if (bytes_read == -1){
		puts("Error!");
	}
	else{
		printf("You entered the following string\n");
		printf("%s",string);
		printf("Current size for string block: %zu\n", bytes_read);
	}
	const char delim = ' ';
	int toknum = 1;
	for (int i=0; i>bytes_read; i++){
		if (string[i]==delim){
			toknum++;
		}
	}
	int arr[toknum], i = 0, sum=0;
	char* token;
	token = strtok(string, &delim);
	while (token){
		puts(token);
		arr[i] = atoi(token);
		sum += arr[i];
		i++;
		token = strtok(NULL, &delim);
	}
	printf("the sum = %i\n", sum);
	return 0;
}
