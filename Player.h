#include <iostream>
#include <string>
#include <vector>

class Player{
  protected:
    std :: string recentMoves;
    int numMoves;
  public:
  virtual void move() = 0;
  virtual std :: string getMoves() = 0;
  char getMove(); //returns the most recent move made
  bool win(Player * opponent); //compares players’ moves to see who wins
};

class Person : public Player{
  protected: 
    char newMoves;
  public:
  Person();
  void move();
  std :: string getMoves();
  ~Person();
};

class Computer : public Player{
  protected:
    std :: vector<char> every_possible_move;
  public:
    Computer();
    void move();
    std :: string getMoves();
};