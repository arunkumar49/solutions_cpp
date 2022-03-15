#include<iostream>

using namespace std;


void print_right_star(int num);      //Prototyping

int main(){
   int num{};
   
   cout << "Enter the number of rows you want:";
   cin >> num;

   print_right_star(num);
}


void print_right_star(int num){ 
   for(int i{1}; i<=num; i++){         // for printing rows
      for(int j{1}; j<=i; j++){        // for printing columns
         cout << "*";
      }
      cout << endl;
   }  
}