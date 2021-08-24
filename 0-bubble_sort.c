#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

void bubble_sort(int *array, size_t size)
{
  size_t i = 0;
  size_t j = 0;

  for(i = 0; i < size; i++)
  {
    for(j = 0; j < size - 1- i; j++)
    {
      if(array[j] > array[ j+ 1])
      {
        int temp = 0;
        
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
        print_array(array, size);
      }
    }
  }
}