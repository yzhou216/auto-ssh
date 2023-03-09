#include <stdio.h>

#define SERVER_NAME_MAX_LEN 22
#define SERVER_MAX_QUANT 100

struct server {
	char name[SERVER_NAME_MAX_LEN + 1];
	int users;
} server;

int main(int argc, char **argv)
{
	printf("hello, world\n");
	return 0;
}
