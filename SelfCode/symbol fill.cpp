#include<iostream>
#include<string>


int main ()
{
  char symbol;
  int height;
  int weight;
  std::string line;
  int index_H = 0;
  int index_W = 0;
  
  std::cout << "Choise symbol... ";
  std::cin >> symbol;
  std::cout << "Height... ";
  std::cin >> height;
  std::cout << "Weight... ";
  std::cin >> weight;
  std:: << std::endl;
  while (index_W < weight) {
    line += symbol;
    index_W++;
  }
  
  while (index_H < height) {
    std::cout << line << std::endl;
    index_H++;
  }
