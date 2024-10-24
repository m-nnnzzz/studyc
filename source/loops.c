#include <stdio.h>

int main(){

    // create a variable
    int age         = 0;

    // message asking for input
    printf("give me your age.\n");

    // input the variable to assigned variable
    scanf("%d", &age);

    // setting up a variable as a counter
    int count       = 0;


    // usage of for, while and do...while

    // for is usually for a fixed amount of iteration (repeat)
    for (int ii=age; ii<65; ii++)
    {
        count = count + 1;
    }


    // while let the instruction runs until the condition is met
    count = 0;
    while (age < 65) {
        age ++;
        count ++;
    }


    // do...while guarantees to run at least one time
    do {
        age ++;
        count ++;
    }
    while(age < 65);


    // print result
    printf("%d more years then you can retire", count);


    return 0;
}