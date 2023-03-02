/*****************************************************************************
# Author:           Devri Anderson 
# Lab:              Assignment #3
# Date:             October 14, 2021
# Description:      This progam prompts for the number of Oreo cookies eaten and outputs the serving size and calories consumed.
# Input:            int numCookies
# Output:           int numCalories, double numServings 
# Sources:          Zybooks & GD's zoom session
******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

//declaring constants
const int SERVING_SIZE = 3;
const int COOKIE_CALORIES = 53;

int main() {
  //declaring variables
  int numCookies = 0;
  int numCalories = 0;
  double numServings = 0;

  //setting precision to 1 decimal point
  cout << fixed << setprecision(1);

  //greeting prompt
  cout << "Welcome to the Oreo calorie counter!" << endl << endl;

  //prompting the user to enter the amount of oreos eaten
  cout << "Enter the number of Oreos eaten: ";
  cin >> numCookies;
  cout << endl;

  //calculating input to amount of servings and calories
  numServings = static_cast<double>(numCookies) / SERVING_SIZE;
  numCalories = numCookies * COOKIE_CALORIES;

  //displays servings and calories to the user
  cout << numCookies << " Oreos equals " << numServings << " servings!" << endl;
  cout << "You consumed " << numCalories << " calories." << endl << endl;
  
  //displays exit message to user
  cout<< "Keep eating Oreos and getting that exercise!" << endl;
  
  return 0;
}