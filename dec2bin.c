#include <stdio.h>
#include <stdlib.h>
#define ULL unsigned long long
#define FULL ~((ULL)(0))
#define TULL (~(FULL>>1))

int main(int argc, char** argv)
{
	if(argc < 2) {
		printf("usage: %s <decimal>\n%s 4933",argv[0],argv[0]);
		return 0;
	}
	ULL num = strtoull(argv[1],NULL,10);
	puts("\n");
	for(int i = 0;i < 64;i++, num<<=1){
		if(num/TULL)
			printf("1");
		else
			printf("0");
	if(i%4 == 3)printf(",");
	}
}