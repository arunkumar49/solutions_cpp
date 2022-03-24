/*
  int findCount(int arr[], int length, int num, int diff);

  The function accepts an integer array ‘arr’, its length and two integer variables ‘num’ and
  ‘diff’. Implement this function to find and return the number of elements of ‘arr’ having an
  absolute difference of less than or equal to ‘diff’ with ‘num’.

Note: In case there is no element in ‘arr’ whose absolute difference with ‘num’ is less than
or equal to ‘diff’, return -1.

  Example:
Input:
  arr: 12 3 14 56 77 13
  num: 13
  diff: 2

Output:
3

 */

#include <iostream>

using namespace std;

int findCount(int arr[], int length, int num, int diff); // prototyping

int main()
{
  int num{};
  int length{};

  cout << "Enter the size of the array: ";
  cin >> length;

  cout << "Enter the reference number: ";
  cin >> num;

  int diff{};

  cout << "Enter the absolute difference: ";
  cin >> diff;

  int arr[length];

  cout << "Enter element for the index :";
  for (int i{0}; i < length; i++)
  {
    cin >> arr[i];
  }

  cout << "Output: " << findCount(arr, length, num, diff);

  cout << endl;
  return 0;
}

// implementation of the function

int findCount(int arr[], int length, int num, int diff)
{
  int count{};
  int abs_diff{};

  for (int i{}; i < length; i++)
  {
    abs_diff = abs(num - arr[i]);
    if (abs_diff <= diff)
    {
      count++;
    }
    else if (count == 0)
      return -1;
  }
  return count;
}