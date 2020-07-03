/*
 * FileIO.c
 *
 *  Created on: Jan 20, 2014
 *      Author: marknorton
 */
/*
 ============================================================================
 Name        : C_tutorial.c
 Author      : aj
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {

    FILE *filePtr = fopen("example.txt", "rw");
    char line[1000];

    if (fPtr == NULL) {
        /* Handle error for if fopen failed to find a file */
        printf("Could not open file %s", FILE_NAME);
        return EXIT_FAILURE;
    }

    while (fgets(line, sizeof(line), filePtr)) {
        printf("%s", line);
    }

    if (fclose(filePtr) == EOF) {
        /* Handle error for if closed before returning to the caller*/
        puts("Was not closed before returning to the caller!");
        return 1;
    }
    return 0;
}

//
//int main(void) {
//
//	FILE *outputFile = (FILE *) fopen("INTERMEDIATE2MIPSASSEMBLER.asm", "w+");
//
//	fprintf(outputFile, "%s", "hinnnnnn yolo \nsdsdff");
//	fclose(outputFile);
//
//	char line[1000];
//	FILE * inputFile = (FILE *) fopen("INTERMEDIATE2MIPSASSEMBLER.asm", "r+");
//
//	while (fgets(line, sizeof(line), inputFile)) {
//		printf( "%s", line);
//	}
//	fclose(inputFile);
//
//	return 1;
//}
