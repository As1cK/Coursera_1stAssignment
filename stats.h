/******************************************************************************
 * Copyright (C) 2017 by Cesar Munayco
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Cesar Munayco not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief This file is to be used as a function library for Statistical Analytics
 *
 * This file contains the main code for the Statistical Analysis Required for peer review
 *
 * @author Cesar Munayco
 * @date 06/11/17
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

 
 /* 
	---------------------------------------------------------------------- 	
	print_array function	
	@brief prints elements of the array
	
	@param unsigned char a[] : enter array name here
	@param int size : enter array size here
	@return It doens't return value
*/
	void print_array(unsigned char a[], int size);
	//----------------------------------------------------------------------
/*	find_maximum function
 	
	unsigned char find_maximum(unsigned char a[],unsigned int size)
	@brief finds the maximum value from the elements of the array
	
	@param unsigned char a[] : enter array name here
	@para int size : enter array size here
	@return The maximum value in the array
*/
	unsigned char find_maximum(unsigned char a[],unsigned int size);
	//----------------------------------------------------------------------
/*	find_mean function
	
	@brief finds the mean value from the elements of the array
	
	@param unsigned char a[] : enter array name here
	@para int size : enter array size here
	@return The mean value from the array
*/
	unsigned int find_mean(unsigned char a[], unsigned int size);
	//----------------------------------------------------------------------
/*	find_minimum function
 	
	@brief finds the minimum value from the elements of the array
	
	@param unsigned char a[] : enter array name here
	@para int size : enter array size here
	@return The minimum value in the array
*/
	unsigned char find_minimum(unsigned char a[],unsigned int size);
	//----------------------------------------------------------------------
 

void print_array(unsigned char a[], int size){
 int j;
 for(j=0; j<size-1; j++) {
	printf ("%d, ", a[j]);
 }
 printf ("%d. ", a[size-1]);
}

unsigned char find_maximum(unsigned char a[],unsigned int size) {
	unsigned char j;
	unsigned char max_val = 0;
	for (j=0; j<size; j++){
		if (a[j] > max_val){
			max_val = a[j];
		}
	}
	return max_val;	
}

unsigned int find_mean(unsigned char a[], unsigned int size){
	unsigned int j;
	unsigned int mean_val = 0;
	unsigned int sum = 0;
	for (j=0; j<size; j++){
		sum = sum + a[j];
		}
	mean_val = sum/size;
	return mean_val;	
	}

unsigned char find_minimum(unsigned char a[], unsigned int size){
	unsigned char j;
	unsigned char min_val;
	if (a[0] > a[1]){
			min_val = a[1];
		}
		else 
			min_val = a[0];
	//------------------------------//
	for (j=0; j<size; j++){
		if (a[j] < min_val){
			min_val = a[j];
		}
	}
	return min_val;		
	
}

void print_statistics(unsigned char a[], unsigned int b){
	unsigned char max,min = 0;
	unsigned int mean = 0;
	min = find_minimum(a, b);
	printf("Minimum Value is: %d", min);
	printf("\n----------------------------------------------\n");
	max = find_maximum(a, b);
	printf("Maximum Value is: %d", max);
	printf("\n----------------------------------------------\n");
	mean = find_mean(a, b);
	printf("Mean Value is: %d", mean);
	printf("\n----------------------------------------------\n");
	
}

#endif /* __STATS_H__ */
