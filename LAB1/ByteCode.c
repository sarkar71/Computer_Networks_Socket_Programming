#include<stdio.h>
struct pkt{
	char ch1;
	char ch2[2];
	char ch3;	
};
typedef unsigned char BYTE;
int main(){
	int value;
	scanf("%d", &value);
	BYTE a, b, c, d;
	a = (value & 0xFF);
	b = ((value >> 8) & 0xFF);
	c = ((value >> 16) & 0xFF);
	d = ((value >> 24) & 0xFF);
	printf("a = %02X\n", a);
	printf("b = %02X\n", b);
	printf("c = %02X\n", c);
	printf("d = %02X\n", d);
	struct pkt p;
	p.ch1 = a;
	p.ch2[0] = b;
	p.ch2[1] = c;
	p.ch3 = d;
	printf("a = %02X\n", p.ch1);
	printf("b = %02X %02X\n", p.ch2[0], p.ch2[1]);
	printf("d = %02X\n", p.ch3);
	return 0;
}
