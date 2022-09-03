/**
 * @file main.cpp
 * @author Jacqueline Bybee
 * @date 2022-09-02
 * @brief Hello World
 * 
 * Just a simple file to push to github
 */


#include <iostream>

using namespace std;


/**
 * Takes user entered number and finds the sum of the 1 to n
 *
 * @param int n User entered number
 * @pre User entered a number for n
 * @return int Sum of 1 to n
 * 
 */
int sum(int n);

int main() {
  int n = 0;
  cout << "Hello World!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << "Enter a number pls.\n";
  cin >> n;
  cout << endl << sum(n) << endl;
  
  return 0;
}

int sum(int n){
  int total = 0;
  for( int i = 0; i < n; i++){
    total += i;
  }
  return total;
}
