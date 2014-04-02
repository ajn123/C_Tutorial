#include <stdio.h>
#include <stdbool.h>

//@author AJ Norton

typedef struct {  // initializes a structure
	//typef is used to avoid writing "struct" and just have to write the type "food"

	int calories;// variable contained in each struct.
	int fat;

	struct food *pointer;  // a structure can contain a pointer to the same structure type or any other type.
} food;


int main() {




    food sandwich = {500,12}; //Initializes calories to 500. and fat to 12

    food burger = {400}; //Initializes calories to 400 and fat to 0.
    //the initialize format works by assigning values to the variables from top to bottom in the struct
    //so the order of the struct variables in the definition impacts how they are defined.
    //in this case calories is defined first because it is the first thing defined in the struct, fat is second and so on

    burger.calories = 100; //changes the number of calories in the structure by using Dot notation.
    //dot notation can be used to access the variable and modify it.


    food *pointerToFood = &sandwich; // declares a pointer of type food and assigns it the address of sandwich



    pointerToFood->pointer = &burger;// uses  arrow notation "->" which is how you assign values to POINTERS


    //This will loop through the pointer until it pointing to NUll, it keeps assigning the pointer to the pointer
    //of the struct is currently pointing to, this provides a way to link structure and loop through them.

    for(;pointerToFood != NULL; pointerToFood = pointerToFood->pointer)
    {
    	printf("%d \n",pointerToFood->calories );
    }


    /**
     * output:
     * 500
     * 100
     */





	return 0;
}




