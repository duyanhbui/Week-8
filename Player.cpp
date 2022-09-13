#include <iostream>
#include "Player.h"

char Player :: getMove(){
  return recentMoves[numMoves];
}

bool Player :: win(Player *opponent){
  std :: cout << opponent->getMove() << "::" << this->getMove() << std :: endl;
  if( (opponent->getMove() && this->getMove()) || (opponent->getMove() == 'r' && this->getMove() == 's') 
      || (opponent->getMove() == 'p' && this->getMove() == 'r') || (opponent->getMove() == 's' && this->getMove() == 'p')){
    std :: cout << "False"  << std :: endl;
    return false;
  }
  else{
    std :: cout << "True"  << std :: endl;
    return true;
  }
}