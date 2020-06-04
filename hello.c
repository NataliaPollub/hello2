#include<stdio.h>
#include "hello.h"

int main(void)
{
	printf("Hello, world !\n\n");
	printf("%s\n%s\n%s\n\n", HELLO_NAME, HELLO_VERSION, HELLO_AUTHOR);
	return(0);
}
