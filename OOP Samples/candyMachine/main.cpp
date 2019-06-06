#include <iostream>
#include "dispenserType.h"
#include "cashRegister.h"

#define  SELL_COOKIE
//#define  DEBUG

using namespace std;

enum {CANDY=1, CHIPS, GUM, COOKIES} products;

void showSelection () {
  cout << "Welcome to OOP class's Candy Shop" << endl;
  cout << "To Select an Item Enter," << endl;
  cout << "1 for Candy" << endl;
  cout << "2 for Chips" << endl;
  cout << "3 for Gum" << endl;
  cout << "4 for Cookies" << endl;
  cout << "9 for Exit" << endl;
}

void sellProduct(dispenserType& product, cashRegister& pCounter ) {
      int amountIn;

      if(product.count() > 0)
      {
         cout << "Lutfen para girisi yapin" << endl;
         cin >> amountIn;

         if(product.productCost() > amountIn){
	   cout << "Yeterli tutar girin" << endl;
	   return;
        } else {
	  product.makeSale();
	  pCounter.acceptAmount(product.productCost());
	  cout << "Lutfen " << amountIn - product.productCost() << " tutarini geri aliniz " << endl;

        }
      } else
        cout << "Urun kalmadi" << endl;
}


int main() {
  cashRegister counter;
  dispenserType candy(50, 50);
  dispenserType chips(10, 65);
  dispenserType gum(5, 75);
#ifdef SELL_COOKIE
  dispenserType cookie(3, 125);
#endif
  
  int choice;
  showSelection();

  cin >> choice;

  while (choice != 9) {
       switch (choice ) {
          //define case statements here
          case CANDY: 
                sellProduct(candy, counter);
                break;
          case CHIPS:
                sellProduct(chips, counter);
                break;
          case GUM:
                sellProduct(gum, counter);
                break;
          case COOKIES: 
                sellProduct(cookie, counter);
                break;
          case 9:
                return 0;
          default :
                cout << "Invalid Selection" << endl;
         }
 #ifdef DEBUG 
        cout << "Kalan Cookieler" << cookie.count() << endl;
 #endif
        showSelection();
        cin >> choice;
  }

  return 0;
}
