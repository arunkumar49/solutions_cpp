/*

The function accepts two integers n, m as arguments Find the sum of all numbers in range from 1 to m(both inclusive)
that are not divisible by n. Return difference between sum of integers not divisible by n with sum of numbers divisible
by n.

Assumption:

n>0 and m>0
Sum lies between integral range

*/

#include <iostream>

using namespace std;

int differenceofSum(int n, int m){
  
  int odd_sum = 0;
  int even_sum = 0;
  for (int i{1}; i <=m; i++){ // no need to create array bcause  arr[i]=i;
    if(i%n==0){
      even_sum += i;
    }
    else{
      odd_sum += i;
    }
  }
  if(odd_sum>even_sum)
    return odd_sum - even_sum;
  else
    return even_sum - odd_sum;
}

int main(){

  int n{}, m{};

  cout << "Enter the value for n: ";
  cin >> n;
  cout << "Enter the value for m: ";
  cin >> m;

  cout << differenceofSum(n, m) << endl;

  cout << endl;
  return 0;
}