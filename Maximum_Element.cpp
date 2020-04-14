#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {

        long stack[100000];
        int queryType = 0;
        int numberOfQueries = 0;
        long topOfStack = -1;
        long iterator = 0;
        long numberToBeInserted = 0;
        long maximumNumber = 0 ;

        scanf("%d", &numberOfQueries);

        while (numberOfQueries > 0)
        {
          
            scanf("%d", &queryType);
           
            switch (queryType)
            {
            case 1:
                
                scanf("%ld", &numberToBeInserted);
                if (numberToBeInserted > maximumNumber)
                    maximumNumber = numberToBeInserted;
                stack[++topOfStack] = numberToBeInserted;
                break;
            case 2:
                
                if (stack[topOfStack] == maximumNumber)
                {
                    topOfStack--;
                    
                    maximumNumber = 0;
                    iterator = topOfStack;
                    while (iterator > -1)
                    {
                        maximumNumber = stack[iterator] > maximumNumber ? stack[iterator] : maximumNumber;
                        iterator--;
                    }
                }
                else
                    topOfStack--;
                break;
            case 3:
        
                printf("%ld\n", maximumNumber);
                break;
            }
            numberOfQueries--;
        }
    return 0;
}

