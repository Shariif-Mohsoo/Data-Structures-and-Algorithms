#include <iostream>
using namespace std;
int main()
{
   // Decimal to Binary
   /*code
     int num;
   cout << "Enter number:";
   cin >> num;

   int rem, ans = 0, mul = 1;
   int copy = num;
   while (copy)
   {
      // reminder
      // rem = copy & 1;
      rem = copy % 2;
      // quotient
      // copy = copy>>1;
      copy /= 2;
      // ans
      ans = rem * mul + ans;
      // mul
      mul *= 10;
   }
   cout << "Binary of " << num << " is: " << ans << endl;
   */
   //   Binary to Decimal
   /* code
   int binary;
   cout << "Enter binary number:";
   cin >> binary;
   int cpy = binary, rem, ans = 0, mul = 1;
   while (cpy)
   {
      // reminder
      rem = cpy % 10;
      // divide by 10
      cpy /= 10;
      // ans
      ans = rem * mul + ans;
      // mul
      mul *= 2;
   }
   cout << "Decimal of binary " << binary << " is: " << ans << endl;
   */

   /*code
   // Decimal to Ocal
   int num;
   cout << "Enter number:";
   cin >> num;

   int rem, ans = 0, mul = 1;
   int copy = num;
   while (copy)
   {
      // reminder
      rem = copy % 8;
      // quotient
      copy /= 8;
      // ans
      ans = rem * mul + ans;
      // mul
      mul *= 10;
   }
   cout << "Octal form of " << num << " is: " << ans << endl;
    */

   //   octal to Decimal
   /* code
   int octal;
   cout << "Enter octal number:";
   cin >> octal;
   int cpy = octal, rem, ans = 0, mul = 1;
   while (cpy)
   {
      // reminder
      rem = cpy % 10;
      // divide by 10
      cpy /= 10;
      // ans
      ans = rem * mul + ans;
      // mul
      mul *= 8;
   }
   cout << "Decimal of octal " << octal << " is: " << ans << endl;
    */

   return 0;
}
