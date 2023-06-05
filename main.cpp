#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int CheckWhetheEvenOrOdd(int x)
{
    if (x % 2 == 0) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	
    for (int i = a; a <= b; i++)
    {
        switch (i)
        {
            case 1: printf("one\n"); break;
            case 2: printf("two\n"); break;
            case 3: printf("three\n"); break;
            case 4: printf("four\n"); break;
            case 5: printf("five\n"); break;
            case 6: printf("six\n"); break;
            case 7: printf("seven\n"); break;
            case 8: printf("eight\n"); break;
            case 9: printf("nine\n"); break;
            default: 
            {
                printf("%s\n", CheckWhetheEvenOrOdd(i) == 1 ? "even" : "odd");
                break;
            }
        }

        a++;
    }

    return 0;
}
