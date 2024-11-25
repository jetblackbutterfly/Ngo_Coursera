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
 * @file stats.h
 *
 * Description: To analyze an array of unsigned char data items and report 
 * 		analytics on the maximum, minimum, mean, and median of the 
 * 		data set.
 *
 * @author Jennifer Ngo
 * @date Editted November 2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints the minimum, maximum, mean, and median of a data array
 *
 * This function prints the statistics of an array 
 * including minimum, maximum, mean, and median.
 *
 * @param * ptr The unsigned char pointer to an n-element data array
 * @param arr_size The size of the array
 *
 * @return None
 */
void print_statistics(unsigned char * ptr, unsigned int arr_size);


/**
 * @brief Prints the array to the screen
 *
 * This function takes an array of data and a length, then prints the array to the screen.
 *
 * @param * ptr The unsigned char pointer to an n-element data array
 * @param arr_size The size of the array
 *
 * @return None
 */
void print_array(unsigned char * ptr, unsigned int arr_size);


/**
 * @brief Find the median value of a data array.
 *
 * This function takes an array of data and a length, then returns the median value.
 *
 * @param * ptr The unsigned char pointer to an n-element data array
 * @param arr_size The size of the array
 *
 * @return The unsigned char median value
 */
unsigned char find_median(unsigned char * ptr, unsigned int arr_size);


/**
 * @brief Find the mean value of a data array.
 *
 * This function takes an array of data and a length, then returns the mean value.
 *
 * @param * ptr The unsigned char pointer to an n-element data array
 * @param arr_size The size of the array
 *
 * @return The unsigned char mean value
 */
unsigned char find_mean(unsigned char * ptr, unsigned int arr_size);


/**
 * @brief Find the maximum value of a data array.
 *
 * This function takes an array of data and a length, then returns the maximum value.
 *
 * @param * ptr The unsigned char pointer to an n-element data array
 * @param arr_size The size of the array
 *
 * @return The unsigned char maximum value
 */
unsigned char find_maximum(unsigned char * ptr, unsigned int arr_size);


/**
 * @brief Find the minimum value of a data array.
 *
 * This function takes an array of data and a length, then returns the minimum value.
 *
 * @param * ptr The unsigned char pointer to an n-element data array
 * @param arr_size The size of the array
 *
 * @return The unsigned char minimum value
 */
unsigned char find_minimum(unsigned char * ptr, unsigned int arr_size);

/**
 * @brief Sort the array from largest to smallest
 *
 * This function takes an array of data and a length, then sorts the array in descending order.
 *
 * @param * ptr The unsigned char pointer to an n-element data array
 * @param arr_size The size of the array
 *
 * @return None
 */
void sort_array(unsigned char * ptr, unsigned int arr_size);

#endif /* __STATS_H__ */
