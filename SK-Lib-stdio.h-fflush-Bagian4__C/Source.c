#pragma warning(disable:4996)

#include <stdio.h>
#include <string.h>
#include <conio.h>

/*
	Source by Programiz
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	int x;
	char buffer[1024];

	setvbuf(stdout, buffer, _IOFBF, 1024);
	printf("Enter an integer - ");

	fflush(stdout);

	scanf("%d", &x);
	printf("You entered %d", x);

	_getch();
	return(0);
}