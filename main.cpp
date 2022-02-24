#include <iostream>
using namespace std;

int main() 
{
char Player1, Player2;
  std::cout << "\n\nPlayer 1 Choose One-\n1.ROCK\n2.PAPER\n3.SCISSORS\n\n";
  std::cin >>Player1;
  std::cout << "\n\nPlayer 2 Choose One-\n1.ROCK\n2.PAPER\n3.SCISSORS\n\n"; 
  std::cin >>Player2; 
  
  if((Player1 == '1' && Player2 == '3') ||
     (Player1 == '2' && Player2 == '1') ||
     (Player1 == '3' && Player2 == '2'))
  {
    std::cout <<"Player1 Wins";
  } 
  
  else if((Player2 == '1' && Player2 == '3')||
          (Player2 == '2' && Player1 == '1')||
          (Player2 == '3' && Player1 == '2'))
  {
    std::cout <<"Player2 Wins!!!";
  }
           else if(Player1 == Player2)
  { 
    std::cout <<"No One Wins!!!";
  }
  else{
    std::cout <<"\nError.Please Put given Options Only";
  }

}
