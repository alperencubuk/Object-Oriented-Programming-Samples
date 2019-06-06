#include <iostream>
#include <fstream>
#include "customer.h"
//TODO: change all the char * to strings

customer_t * allocate_customer(){
   return malloc(sizeof(customer_t));
}

int free_customer(customer_t * current_customer){
    free(current_customer); //release the memory
    return ERR_SUCCESS;
}


int get_customer_id(){
    if(tail_customer != NULL)
        return tail_customer->customer_id + 1;
    else
        return 1;
}


int read_customers_from_file(string f_name){
    //TODO:Read customers from the file and insert them to the customer list

    return ERR_SUCCESS;
}

int insert_customer(customer_t * current_customer){

    customer_t * head_customer_ptr = head_customer;
    if(head_customer_ptr == NULL) {
        head_customer = current_customer;
        tail_customer = current_customer;
        return ERR_SUCCESS;
    }

    while(head_customer_ptr != NULL) {
        if(head_customer_ptr->next != NULL) { //break early to insert data in between, the list is single linked
            if(head_customer_ptr->next->customer_id >= current_customer->customer_id)
                break;
        }
        head_customer_ptr = head_customer_ptr->next;
    }

    if(head_customer_ptr == NULL) { //we are at the end of the list
        tail_customer->next =current_customer;
        tail_customer = current_customer;
    } else {
        current_customer->next = head_customer_ptr->next;
        head_customer_ptr->next = current_customer;
    }
    return ERR_SUCCESS;
}

void print_cached_customers(){
    customer_t *head_customer_ptr = head_customer;
    //TODO:Convert this to cin/cout
    while(head_customer_ptr !=NULL){
        printf("ID:     %20d\n", head_customer_ptr->customer_id);
        printf("Name:   %20s\n", head_customer_ptr->name);
        printf("Surname:%20s\n", head_customer_ptr->surname);
        printf("Tel:    %20s\n\n", head_customer_ptr->tel);
        head_customer_ptr = head_customer_ptr->next;
    }
}

int write_cached_customers_to_file(string o_file){
  //TODO:write the new data back to  o_file

  return ERR_SUCCESS;
}

int delete_customer(int customer_id){
   //TODO:delete the customer from the memory with the given id

   return ERR_SUCCESS;
}


int search_customer(int customer_id){
   //TODO:search the customer in the memory with the given id

  return ERR_SUCCESS;
}

