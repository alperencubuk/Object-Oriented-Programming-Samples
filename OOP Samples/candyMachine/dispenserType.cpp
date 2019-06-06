#include "dispenserType.h"

dispenserType::dispenserType(int numberOfProducts, int productCost) {
   if(numberOfProducts > 0) numOfProducts = numberOfProducts;
   else numOfProducts = 50;

   if(productCost > 0) cost = productCost;
   else  cost = 50; //????
}
int dispenserType::count() {
    return numOfProducts;
}
int dispenserType::productCost(){
    return cost;
}
void dispenserType::makeSale(){
    numOfProducts--;
}

 
