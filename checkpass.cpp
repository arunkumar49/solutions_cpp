#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int CheckPassword(char str[], int n, int min);

int main(){
   int n{};
   int min{};
   string s{};


   // cout << "Enter the length of new password: ";
   // cin >> n;

   cout << "Enter the new password: ";
   getline(cin, s);
   n= s.length();

   char *str = &s[0];

   cout << "Enter the minimum number of character: ";
   cin >> min;

   int check = CheckPassword(str,n,min);

   if(check==1)
      cout << "valid" << endl;
   else
      cout << "invalid" << endl;

   cout << endl;
   return 0;
}

int CheckPassword(char str[], int n, int min){
   if(n<min)                  
      return 0;
   
   if(isdigit(str[0]))          // to check first number is digit
      return 0;                            
   
   int a{0}, cap{}, nu{};

   while(a<n){
      if(str[a]== ' ' || str[a]=='+')         // false if password has space or + symbol
         return 0;
      
      if(isupper(str[a])){             // to check capital letter in password
         cap++;
      }
      else if(isdigit(str[a])){       // to check numerical character in password
         nu++;
      }
      a++;
   }
   return cap>0 && nu>0;
}
