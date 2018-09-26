#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	int i;
	char pass[12];

	srand((unsigned int)(time(NULL)));
	for(i = 0; i < 12; i++) {
		pass[i] = 33 + rand() % 94;
	}
	pass[i] = '\0';
	printf("%s\n",pass);
	return (0);
}
