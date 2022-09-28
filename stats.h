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
 * @file <stats> 
 * @brief <can analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set and sort the data from largest to smallest>
 *
 *
 * @author <Yahia Hosny >
 * @date <27-9-2022 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_statistics(unsigned char *arr , unsigned int length);
/**
 * @brief <A function that prints the statistics of an array including minimum, maximum, mean, and median>
 *
 * @param <unsigned char *arr> <A unsigned char pointer to an n-element data array>
 * @param < unsigned int size> <An unsigned integer as the size of the array>
 
 *
 * @return <void>
 */
 /* Add Your Declarations and Function Comments here */ 
void print_array(unsigned char *arr,unsigned int size );
/**
 * @brief <Given an array of data and a length, prints the array to the screen>
 *
 * @param <unsigned char *arr> <A unsigned char pointer to an n-element data array>
 * @param < unsigned int size> <An unsigned integer as the size of the array>
 
 *
 * @return <void>
 */

unsigned int find_median(unsigned char *arr,unsigned int size );
/**
 * @brief <Given an array of data and a length, returns the median value>
 *
 * @param <unsigned char *arr> <A unsigned char pointer to an n-element data array>
 * @param < unsigned int size> <An unsigned integer as the size of the array>
 
 *
 * @return <unsigned int median>
 */
  
  unsigned int find_mean(unsigned char *arr,unsigned int size );
  /**
 * @brief <Given an array of data and a length, returns the mean value>
 *
 * @param <unsigned char *arr> <A unsigned char pointer to an n-element data array>
 * @param < unsigned int size> <An unsigned integer as the size of the array>
 
 *
 * @return <unsigned int mean>
 */
  unsigned int find_maximum(unsigned char *arr,unsigned int size );
  /**
 * @brief <Given an array of data and a length, returns the maximum>
 *
 * @param <unsigned char *arr> <A unsigned char pointer to an n-element data array>
 * @param < unsigned int size> <An unsigned integer as the size of the array>
 
 *
 * @return <unsigned int max>
 */
  unsigned int find_minimum(unsigned char *arr,unsigned int size );
  /**
 * @brief <Given an array of data and a length, returns the minimum>
 *
 * @param <unsigned char *arr> <A unsigned char pointer to an n-element data array>
 * @param < unsigned int size> <An unsigned integer as the size of the array>
 
 *
 * @return <unsigned int min>
 */
  unsigned char  *sort_array(unsigned char *arr,unsigned int size );
  /**
 * @brief <Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )>
 *
 * @param <unsigned char *arr> <A unsigned char pointer to an n-element data array>
 * @param < unsigned int size> <An unsigned integer as the size of the array>
 
 *
 * @return <unsigned char*new_arr>
 */


#endif /* __STATS_H__ */
