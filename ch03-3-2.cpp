#include <stdio.h>

int main() {
	int i, n = 0, * ptr;
	intsale[2][4] = { {63, 84, 140, 130},
		{157, 209, 251, 312} };

	ptr = &sale[0][0];
	for (i = 0; i < 8; i++) {
		printf("\nadress : %u sale %d = %d", ptr, i, *ptr);
		ptr++;
	}
}
