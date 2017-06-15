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
 * @file stats.c 
 * @brief Show statistical Analytics
 *
 * This file contains the main code for the Statistical Analysis Required for peer review
 *
 * @author Cesar Munayco
 * @date 06/15/17
 *
 */



#include <stdio.h>
#include "stats.h"


#define SIZE (40)







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

unsigned char sort_array(unsigned char a[], unsigned int size) {
    char tmp;
    int i, j;
 	for(i=0; i<size-1; i++) {
        for(j=i+1; j<size; j++) {
            if(a[j] > a[i]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void print_statistics(unsigned char a[], unsigned int b){
	unsigned char max,min, median= 0;
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
	sort_array(a, b);
        median = find_median(a, b);
	printf("Median Value is: %d", median);
	printf("\n----------------------------------------------\n");
	printf("Sorted Array is: ");
        print_array(a, b);
        printf("\n----------------------------------------------\n");
    
}

unsigned char find_median(unsigned char a[], unsigned int size){
		char median;
		if (size%2){
			median = (a[(size/2)] + a[(size/2)+1])/2;
			}
		else
			median = a[(size/2)];
			
		return median;
}

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

 
 
 printf("Values in the array are: ");
 print_array(test, 40);
 printf("\n----------------------------------------------\n");
 print_statistics(test, 40);

}
