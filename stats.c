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
 * @file stats.c 
 * @brief Show statistical Analytics
 *
 * This file contains the main code for the Statistical Analysis Required for peer review
 *
 * @author Cesar Munayco
 * @date 06/11/17
 *
 */



#include <stdio.h>
#include "stats.h"


#define SIZE (40)

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
