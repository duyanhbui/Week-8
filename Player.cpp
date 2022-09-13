#include <iostream>
#include "Player.h"

char Player :: getMove(){
  return recentMoves[numMoves];
}

bool Player :: win(Player *opponent){
  //std :: cout << opponent->getMove() << "::" << this->getMove() << std :: endl;
  if ((opponent->getMove() == 'r' && this->getMove() == 'p') 
      || (opponent->getMove() == 's' && this->getMove() == 'r') || (opponent->getMove() == 'p' && this->getMove() == 's')){
    //std :: cout << "True"  << std :: endl;
    return true;
  }
  else if( (opponent->getMove() && this->getMove()) || (opponent->getMove() == 'r' && this->getMove() == 's') 
      || (opponent->getMove() == 'p' && this->getMove() == 'r') || (opponent->getMove() == 's' && this->getMove() == 'p')){
    //std :: cout << "False"  << std :: endl;
    return false;
  }

  return false;
}