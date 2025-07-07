#include <stdio.h>
#include <stdint.h>

int main()
{
	unsigned char uch = 0x7f;	// 0b 0111 1111
	char ch = 0x7f; // 127
	
	unsigned char uch1 = 0x9f;
	char ch1 = 0x9f;
	
	unsigned char uch2 = 0x11f;
	char ch2 = 0x11f;

	printf("uch: %#x, ch: %#x\n", uch, ch);
	printf("uch1: %#x, ch1: %#x\n", uch1, ch1);
	printf("uch2: %#x, ch2: %#x\n", uch2, ch2);

	uch = uch << 1;
	printf("uch << 1: %#x\n", uch);
	ch = ch << 1;
	printf("ch << 1: %#x\n", ch);

	// 우측이동은 부호비트 그대로 따라감
	// ex) 1100 1000 -> 1110 0100
	uch1 = uch1 >> 1;
	printf("uch1 >> 1: %#x\n", uch1);

	ch1 = ch1 >> 1;
	printf("ch1 >> 1: %#x\n", ch1);

	return 0;
}