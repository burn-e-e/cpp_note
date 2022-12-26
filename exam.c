#include <stdio.h>

int main()

{
     int arr[5] = {10, 0, 20, 0, 30};

     for (int i = 0; i < 5; i++)

     {
          arr[i] = rand() % 10;
          printf("%d\n", arr[i]);

     }
}