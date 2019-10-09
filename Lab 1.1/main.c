// Lab 1 Practice
// Question 1

#include <stdio.h>
#include <stdlib.h>

// for loop

//int main()
//{
//    int i;
//
//    for (i=30; i<=1000; i++)
//    {
//
//        if (i%4 == 0)
//        {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
//}

// while loop
//int main ()
//{
//    int i = 30;
//
//    while (i <= 1000)
//    {
//
//         i += 1;
//
//         if (i%4 == 0)
//         {
//              printf("%d\n", i);
//         }
//
//    }
//    return 0;
//}


// do while loop
int main()
{
    int i = 30, sum=0;

    do
    {
        i+=1;

        if (i%4 == 0)
        {
             sum += i;
        }
    }

    while (i<=1000);

    printf("%d\n",sum);

    return 0;
}





