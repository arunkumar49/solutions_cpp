#include<iostream>

using namespace std;


void print_right_star(int num);      //Prototyping

int main(){
   int num{};
   
   cout << "Enter the number of rows you want:";
   cin >> num;

   print_right_star(num);

   cout << endl;
   return 0;
}


void print_right_star(int num){ 
   for(int row{1}; row<=num; row++){         // for printing rows
      for(int col{1}; col<=row; col++){        // for printing columns
         cout << "*";
      }
      cout << endl;
   }  
}