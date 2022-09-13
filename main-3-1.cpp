#include <iostream>
#include "Player.h"

int main(){
  Computer *c1 = new Computer();
  Person *p1 = new Person();

  c1->move();
  p1->move();
  
  c1->win(p1);
  p1->win(c1);

  /*
  if (c1->win(p1) && p1->win(c1) ){
    std :: cout << c1->getMove() << ":" << p1-> getMove() << std :: endl;
    std :: cout << "Draw" << std :: endl;

  }else if (c1->win(p1) == true)
  {
    std :: cout << c1->getMove() << ":" << p1-> getMove() << std :: endl;
    std :: cout << "Computer Win!" << std :: endl;
  }else if (p1->win(c1) == true)
  {
    std :: cout << c1->getMove() << ":" << p1-> getMove() << std :: endl;  
    std :: cout << "Person Win!" << std :: endl;
  }
  */

}