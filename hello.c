#include <stdio.h>
#include <stdbool.h>

typedef struct {

	int i;
	struct food *point;
} food;

int factorial(int i);

int main() {

	for(int i = 0; i <10;i++)
	{

		printf("%d \n", i );
	}





	return 0;
}

int factorial(int i) {
	if (i == 0) {
		return 1;
	} else {
		return i * factorial(i - 1);
	}

}
