/*
 * dec2base.c
 *
 *  Created on: Nov 14, 2018
 *      Author: Kevin
 *  Student ID: 260862327
 */
#include <stdio.h>
#include <stdlib.h>


void dec2base(int input, int base, char *str);
void revStr(char *str, int length);

int number;
int base;
int main(int argc, char *argv[]){
	int quotient = number;
	int n = 0;

	sscanf(argv[1],"%d", &number);
	if (argc == 2) {
		base = 2;
	}

	else {
		sscanf(argv[2],"%d", &base);
	}

	if (number < 0 || number > 2147483647){
		printf("\nError: Number must be of range [0, 2147483647].");
		return(-1);
	}


	if (base <= 1 || base > 36){
		printf("\nError: Base must be of the range [2, 36].");
		return(-1);
	}


	else {
		// determine how many times it is divisible
		while (quotient != 0){
			quotient = quotient / base;
			n ++;
		}
		char array[n+1];		
		dec2base(number, base, array);
	}
}


void dec2base(int input, int base, char *str){
	int remainder;
	int i = 0;
	char reChar;


	while (input != 0){
		remainder = input % base;
		
		if (remainder < 10){
			reChar = '0' + remainder;
		}
		
		if (remainder >= 10){
			reChar = 'A' + (remainder - 10);
		}


		//add to array
		str[i] = reChar;


		input = input / base;
		i++;
	}
	revStr(str,i);
}
void revStr(char *str, int length){
	char* Rstr = (char*)malloc(sizeof(char)*length);
	int i;
	for(i = 0; i < length; i++){
		Rstr[i] = str[length - i - 1];
	}
	printf("The Base-%d form of %d is: ",base, number);
	for (i = 0; i < length; i++){
		printf("%c",Rstr[i]);
	}
	if (number == 0){
		printf("%d",0);
	}
}
