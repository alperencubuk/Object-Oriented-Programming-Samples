#include <stdio.h>
#include <stdlib.h>
#define SIZE 9


void insertion_sort(char sorted_array[], int start_point,  int sorting_size, int ascending);


int main()
{
    char array_to_sort[SIZE] = {'1','9','4','7','5','8','3','2','6'};

    insertion_sort(array_to_sort, 0, SIZE, 0);



    return 0;
}

void insertion_sort(char sorted_array[], int start_point, int sorting_size, int ascending){
 //TODO:Sort the array depending either ascending or descending
    int pivot = sorted_array[start_point + 1];
    int temp_value = 0;
    int sign = ascending?1:-1;
    for(int pivot_ptr=start_point + 1; pivot_ptr<start_point + sorting_size; pivot_ptr++ ){
        for (int check=pivot_ptr - 1; check>=start_point; check--) {
           if(pivot * sign < sorted_array[check] * sign ){
              temp_value = sorted_array[check];
              sorted_array[check] = pivot;
              sorted_array[check + 1] = temp_value;
           } else break;
        }
        pivot = sorted_array[pivot_ptr + 1];
    }
}
