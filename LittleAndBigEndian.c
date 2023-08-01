#include<stdio.h>
#include<inttypes.h>
void swap_endian(uint32_t le){
	uint32_t be = __builtin_bswap32(le);
	printf("little endian : 0x%" PRIx32 "\n", le);
	printf("big endian : 0x%" PRIx32 "\n", be);
}
int main(){
	unsigned int i;
	scanf("%d", &i);
	char *c = (char *)&i;
	if(*c){
		printf("Little endian\n");
	}
	else{
		printf("Big Endian\n");
	}
	swap_endian(i);
	return 0;
}
