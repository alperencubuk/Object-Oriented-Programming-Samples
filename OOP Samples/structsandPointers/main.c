#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "customer.h"

int main()
{
    //Read customer records from a file
    read_customers_from_file("a_file.txt");
    read_customers_from_file("b_file.txt");

    //insert a customer by gettin information from the screen
    //delete a customer with the given ID/Name
    //print customers in the memory
    print_cached_customers();

    return 0;
}
