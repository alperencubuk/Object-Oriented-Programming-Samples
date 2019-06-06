#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED
#define SIZE 20
#define ERR_FAIL  -1
#define ERR_SUCCESS 0

typedef struct customer {
    int customer_id;
    string name;
    string surname;
    string tel;
    struct customer *next;
}customer_t;


customer_t *head_customer;
customer_t *tail_customer;

customer_t * allocate_customer();
int get_customer_id();
int read_customers_from_file(string);
int write_cached_customers_to_file(string, int);
int free_customer(customer_t *);
int delete_customer(int);
int insert_customer(customer_t *);
int search_customer(int);
void print_cached_customers();
#endif // CUSTOMER_H_INCLUDED
