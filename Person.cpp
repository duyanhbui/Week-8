#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include "Player.h"


Person :: Person(){
  recentMoves = "";
  numMoves = -1;
}

void Person :: move(){
  std :: string input;
  std :: cout << "Enter a move: ";
  std :: cin >> input;
  
  //Convert string to char
  std :: vector<char> newInput;
  newInput.push_back(input[0]);
  newMoves = newInput[0];
  if (newMoves == 'r'|| newMoves == 'p' ||newMoves == 's' ||newMoves == 'R'|| newMoves == 'P' ||newMoves == 'S'  ){
    recentMoves += (char) tolower(newMoves);
    numMoves += 1;
  }else{
    std :: cout << "Move Unavailable" << std :: endl;
  }

}


std :: string Person ::getMoves(){
  return recentMoves;
}