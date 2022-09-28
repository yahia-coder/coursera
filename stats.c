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
 * @brief <can analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set and sort the data from largest to smallest >
 *
 * @author <Yahia Hosny>
 * @date <27-9-2022 >
 *
 */
// make a little change 


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
                                
   // print the array
          print_array(test , SIZE )    ;                  
  //  sort and print the sorted  arr 
          print_array( sort_array(test,SIZE) , SIZE );   
 // print statistics
          print_statistics(test , SIZE )    ;   
           
}


  /* Statistics and Printing Functions Go Here */
  
  
  void print_statistics(unsigned char *arr , unsigned int length)
  {
  printf("\n the maximum is %i\n",find_maximum(arr,length));
  printf("\n the minimum is %i\n",find_minimum(arr,length));
  printf("\n the median is %i\n",find_median(arr,length));
  printf("\n the mean is %i\n",find_mean(arr,length));
  
  }
  
  //***************************************************************
  void print_array(unsigned char *arr , unsigned int length )
  {
  printf("\n the array =             {");
                             
    for(int i=0;i<length;i++)
       {
         if (i%8==0 && i!=0)
            { printf("\n                          ");}
         printf(" %i,",(unsigned int)arr[i]);
        }  
          printf("}\n");
         
  }
  //***************************************************************
  
 unsigned int find_median(unsigned char *arr,unsigned  int length )
  {
  int t, median ;
  // Sorting begins */
   for (int i = 0 ; i <length ; i++)         /* Trip-i begins */
   {      
      for (int j = 0 ; j < length ; j++) 
      {
         if (arr[j] <= arr[j+1])               //Interchanging values 
               { 
            t = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = t;
               }
         else
         continue ;
         }
      } // sorting ends */
   //calculation of median */
   if ( length % 2 == 0)
   
      median = (arr[length/2] + arr[length/2+1])/2.0 ;
   else
   median = arr[length/2 + 1];
   
  return (median);
  }
  //************************************************************
  unsigned  int find_mean(unsigned char *arr,unsigned int length )
  {
  int sum =0;
  for(int i=0;i<length;i++)
       {
       
      sum+=arr[i];
  
        }
          
  int mean=(sum/length);
  return (mean);
  }
  //***************************************************************
  unsigned  int find_maximum(unsigned char *arr,unsigned int length )
  {
  unsigned int max=0;
  for(int i=0;i<length;i++)
       {
       if (arr[i] >max)
           max=arr[i];
        else
        continue;
       }
          
  return max;
  }
  
  //***************************************************************
 unsigned  int find_minimum(unsigned char *arr,unsigned int length )
  { 
  unsigned int min=10000000;
  for(int i=0;i<length;i++)
       {
       if (arr[i] <= min)
           min=arr[i];
        else
        continue;
       }
          
  
  return min;
  }
 
  //***************************************************************
  unsigned char  *sort_array(unsigned char *arr,unsigned  int length )
  {
  int t;
  for (int i = 0 ; i <length ; i++)       
   {      
      for (int j = 0 ; j < length ; j++) 
      {
         if (arr[j] <= arr[j+1])               
               { 
            t = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = t;
               }
         else
         continue ;
         }
      }
  return  arr ;
  }



