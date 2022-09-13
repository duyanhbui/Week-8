#include <iostream>
#include "Player.h"
#include <random>

Computer :: Computer(){
  every_possible_move = {'r','p','s'};
  numMoves = -1;
  recentMoves = "";
}

void Computer :: move(){
  std::random_device rd;     // Only used once to initialise (seed) engine
  std::mt19937 rng(rd());    // Random-number engine used (Mersenne-Twister in this case)
  std::uniform_int_distribution<int> uni(0,2); // Guaranteed unbiased

  auto random_index = uni(rng);
  recentMoves += every_possible_move[random_index];
  numMoves += 1;
}


std :: string Computer :: getMoves(){return recentMoves;}