#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
    int n1, n2, n3;
};

int main()
{
    int n;
    struct threeNum num;
    FILE *fptr;
    fptr = fopen("program.bin", "wb");

    if (fptr == NULL)
    {
        printf("Error! opening file");

        exit(1);
    }

    for (n = 1; n < 5; ++n)
    {
        num.n1 = n;
        num.n2 = 6 * n ;
        num.n3 = 6 * n + 2;
        fwrite(&num, sizeof(struct threeNum), 1, fptr);
    }
    
    fclose(fptr);

    return 0;
}