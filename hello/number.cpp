#include <stdio.h>

int main() {
	unsigned short year;
	unsigned char month;
	unsigned char day;

	int y, m, d;
	printf("please input the date:");
	scanf("%d,%d,%d", &y, &m, &d);

	year = (unsigned short) y;
	month = (unsigned char) m;
	day = (unsigned char) d;

	printf("%d, %d, %d",  year,  month,  day);
	return 0;
}