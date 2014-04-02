#include <stdio.h>


/**
 * A struct which is short for structure is another type of variable
 * that can be used to define a list of multiple different variables.  A struct
 * can contain structs of itself or any other variable.  This is a nice way of organizing
 * information under one header.
 */

struct player {

	int number;
	char position;
	struct player *pointer;

};

int main(void) {
	/**
	 * You can initialize structs in by the below notation and specifying their start values
	 * in the order the variables are declared in the struct form top to bottom.  So the number,
	 * position and pointer must be initialized in that order.
	 */
	struct player robin = { 33, 'r', NULL };
	struct player alfred = { 12, 'c', &robin };

	//You can also have pointer to structs just as you can with any other variable
	struct player *batman = &alfred;

	for (; batman != NULL ; batman = batman->pointer) {
		/**
		To get a single variable out of a struct (from a pointer to a struct, you use the
		arrow notation "->".
		*/
		printf("%d \n", batman->number);
	}

	//This is how you print out an attribute from a struct that is not a pointer, you use the dot notation.
	printf("%d \n", robin.number);

	return 0;
}

