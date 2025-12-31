#include <stdio.h>

int main()
{
      printf("Enter a Number:");
      int number;
      scanf("%d", &number);

      //  checking   number is positive or negative

      if (number > 0)
      {
            printf("Number Is Positive\n");
      }
      else if (number < 0)
      {
            printf("Number Is Negative\n");
      }
      else if (number == 0)
      {
            printf(" Number Is Zero \n");
      }
      else
      {
            printf("Entered Number is Not Valid\n");
      }

      //  checking number is even or odd

      if (number % 2 == 0)
      {
            printf("Number Is Even\n");
      }
      else if (number % 2 != 0)
      {
            printf("Number is odd\n");
      }
      else if (number == 0)
      {
            printf("Number is Zero\n");
      }

      // checking number is prime or not

      int count = 0;

      for (int i = 1; i <= number; i++)
      {
            if (number % i == 0)
            {
                  count++;
            }
      }

      if (count == 2)
      {
            printf("Number is Prime\n");
      }
      else if (count > 2 || 2 > count)
      {
            printf("Number Is Not Prime\n");
      }
      return 0;
}