#include <time.h>
#include <stdio.h>
int main(){
	time_t t;
	struct tm *c;
	time(&t);
	c = localtime(&t);
	printf("%s",asctime(c));
	return 0;
}
