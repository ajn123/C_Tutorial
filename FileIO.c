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

	while (fgets(line, sizeof(line), filePtr)) {
		printf("%s", line);
	}

	fclose(filePtr);

	return 1;
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
