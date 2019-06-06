#ifndef _CASH_REGISTER_H
#define _CASH_REGISTER_H

class cashRegister {
  
  public:
      int currentBalance();
      void acceptAmount(int amountIn);
      cashRegister(int cashIn=500);
        
  private:
     int cashOnHand;
};

#endif
