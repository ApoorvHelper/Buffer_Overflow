// Jai Hind..


// This code vulnerable to Buffer Overflow

#include <iostream>
using namespace std;
int main(void)
{
  int arr[10];
  int arr_num;
  int num,i;

   cout << "Enter the count of numbers? ";
   cin >> num;

  for (i = 0; i < num; i++)
  {
    cout << "Enter a number to be stored: ";
    cin >> arr_num;
    arr[i]= arr_num;
  }
  return 0;
}
  
//   Steps to trgger buffer overflow
  
//   1.)The size of an array is fixed as 10.
//   2.)When we will give the count of number more than 10.
//   3.)After taking 10 inputs the code will crash as a result of Buffer Overflow Vulnerability.
  
//   Remedition-> The size of an array never defined earlier in the code, it is always after taking the count.
