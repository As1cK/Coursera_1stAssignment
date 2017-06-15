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
 * @brief This file is to be used as a function library for Statistical Analytics
 *
 * This file contains the main code for the Statistical Analysis Required for peer review
 *
 * @author Cesar Munayco
 * @date 06/15/17
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

 
 /* 
	---------------------------------------------------------------------- 	
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
 /*	sort_array function
 	
	@brief sorts the array in descending order 
	
	@param unsigned char a[] : enter array name here
	@para int size : enter array size here
	@return Sorted array in descending order
*/
	unsigned char sort_array(unsigned char a[], unsigned int size);
	//----------------------------------------------------------------------
 /*	find_median function
 	
	@brief finds the median value from the elements of the array
	
	@param unsigned char a[] : enter array name here
	@para int size : enter array size here
	@return The median value in the array
*/
	unsigned char find_median(unsigned char a[], unsigned int size);
	//----------------------------------------------------------------------

#endif /* __STATS_H__ */





















