#include <stdio.h>
#define SIZE 11

int main(void) {
	char data[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', '\0' };

	int index, i;
	char value = 'K';
	printf("»ðÀÔÀ§Ä¡ : ");  scanf_s("%d", &index); getchar();

	for (i = SIZE-1; i > index; i--) {
		data[i] = data[i - 1];
	}
	data[index] = value;


	for (i = 0; i < SIZE-1 ; i++) {
		printf("%c", data[i]);
	}
}