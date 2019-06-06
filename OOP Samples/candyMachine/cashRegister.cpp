#include "cashRegister.h"

cashRegister::cashRegister(int amountIn) {
   if (amountIn >= 0)
      cashOnHand = amountIn;
   else
      cashOnHand = 0;
}

void cashRegister::acceptAmount(int amountIn){
   cashOnHand += amountIn;
}

int cashRegister::currentBalance(){
   return cashOnHand;
}


