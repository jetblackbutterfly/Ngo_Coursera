/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * File: stats.c
 *
 * Description: To analyze an array of unsigned char data items and report 
 * 		analytics on the maximum, minimum, mean, and median of the 
 * 		data set.
 * 
 * Author: Jennifer Ngo
 * Date: Editted November 2024
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void print_statistics(unsigned char * ptr, unsigned int arr_size);
void print_array(unsigned char * ptr, unsigned int arr_size);
void sort_array(unsigned char * ptr, unsigned int arr_size);
unsigned char find_median(unsigned char * ptr, unsigned int arr_size);
unsigned char find_mean(unsigned char * ptr, unsigned int arr_size);
unsigned char find_maximum(unsigned char * ptr, unsigned int arr_size);
unsigned char find_minimum(unsigned char * ptr, unsigned int arr_size);


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  
  /* Statistics and Printing Functions Go Here */
  printf("Data Array:");
  print_array(test, SIZE);
  print_statistics(test, SIZE);
  sort_array(test, SIZE);
  printf("Sorted Data Array:");
  print_array(test, SIZE);
  

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char * ptr, unsigned int arr_size) {
	unsigned char max_val;
	unsigned char min_val;
	unsigned char median_val;
	unsigned char mean_val;

	min_val = find_minimum(ptr, arr_size);
	max_val = find_maximum(ptr, arr_size);	
	mean_val = find_mean(ptr, arr_size);
	sort_array(ptr, arr_size);
	median_val = find_median(ptr, arr_size);
	
	printf("Minimum: %u\n", min_val);
	printf("Maximum: %u\n", max_val);
	printf("Mean: %u\n", mean_val);
	printf("Median: %u\n", median_val);
}

void print_array(unsigned char * ptr, unsigned int arr_size){
	for (int i = 0; i < arr_size; i++){
		printf("%d ", ptr[i]);
	}
	printf("\n");
}

unsigned char find_median(unsigned char * ptr, unsigned int arr_size){
	sort_array(ptr, arr_size);
	
	if (arr_size % 2 == 0){
		return (ptr[arr_size/2 - 1] + ptr[arr_size/2]) / 2.0;
	} else {
		return ptr[arr_size/2];
	}
}

unsigned char find_mean(unsigned char * ptr, unsigned int arr_size){
	int sum;
	
	for (int i = 0; i < arr_size; i++){
		sum += ptr[i];
	}
	return sum/arr_size;
}

unsigned char find_maximum(unsigned char * ptr, unsigned int arr_size){
	unsigned char max = ptr[0];
	
	for (int i = 0; i < arr_size; i++){
		if (ptr[i] > max){
			max = ptr[i];
		}
	}
	return max;
}

unsigned char find_minimum(unsigned char * ptr, unsigned int arr_size){
	unsigned char min = ptr[0];
	
	for (int i = 0; i < arr_size; i++){
		if (ptr[i] < min){
			min = ptr[i];
		}
	}
	return min;
}

void sort_array(unsigned char * ptr, unsigned int arr_size){
	int temp;
	
	for (int i = 0; i < arr_size - 1; i++){
		for (int j = i + 1; j < arr_size; j++){
			if (*(ptr + i) < *(ptr + j)){
				temp = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = temp;
			}
		}
	}
}
