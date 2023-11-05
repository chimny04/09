#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(int argc, char *argv[])
{
    int i, average;
    int sum = 0;
    int grade[SIZE];
    
    printf("input 5 scores: "); 
    for(i=0; i<SIZE; i++) {
        scanf("%d", &grade[i]);
        sum += grade[i];
    }
    
    average = sum / SIZE;
    
    printf("score average = %d\n", average);
 
    system("PAUSE");	
    return 0;
}
 
