#include <stdio.h>

int main()
{
   char menuitem[] = "Slimy Orange Stuff \"Icky Woka GU\"";
   int pints=2;
   float price = 1.45;

   printf("Today Special - %s\n",menuitem);
   printf("You want %d pint.\n",pints);
   printf("That would be $%.2f, please.\n",price*pints);
   return(0);
}
