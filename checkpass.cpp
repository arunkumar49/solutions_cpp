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
   
   if(str[0]-'0'>=0 && str[0]-'0' <=9)
      return 0;
   
   int a{0}, cap{}, nu{};

   while(a<n){
      if(str[a]== ' ' || str[a]=='+')
         return 0;
      
      if(str[a]>=65 && str[a]<=90){
         cap++;
      }
      else if(str[a]-'0'>=0 && str[a]-'0' <=9){
         nu++;
      }
      a++;
   }
   return cap>0 && nu>0;
}
