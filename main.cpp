#include <iostream>
#include <chrono>
#include <random>
using namespace std;

int main(){   
 mt19937 mt{static_cast<unsigned int>(chrono::steady_clock::now().time_since_epoch().count())}; //using the system time to make a new seed
 uniform_int_distribution die6{ 1, 6 }; //sets the random number within a certain range

 for(int i = 0; i < 6; i++){ //prints a series of random numbers
  cout << die6(mt) << "\t";
 }

}
