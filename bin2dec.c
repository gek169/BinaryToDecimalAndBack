#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	long unsigned int val = 0;
	if(argc < 2) {
		printf("usage: %s <binary string>\n%s 0101",argv[0],argv[0]);
		return 0;
	}
	for(int i = 0; argv[1][i] != '\0';i++)
		{if(argv[1][i] == ' ' || argv[1][i] == ',') continue; val<<=1;if(argv[1][i] == '1')val+=1;}
	printf("\n=%lu\n=%lx",val,val);
}