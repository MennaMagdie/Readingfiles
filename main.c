#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[2];
    FILE *pointer;
    pointer = fopen("minions.txt","a+");

    while (!feof(pointer))
    {
        int num;
        fscanf(pointer,"%d",&array[num]);
        num = num + 1;
    }

    int sum = ("%d",array[0])+("%d",array[1]);
    printf("%d + %d = %d\n",array[0],array[1],sum);
    fprintf(pointer,"\n%d",sum);
    fclose(pointer);
    return 0;
}
