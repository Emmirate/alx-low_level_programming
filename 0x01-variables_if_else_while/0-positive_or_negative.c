#include <stdlid.h>
##include <time.h>
[A[[#[C[C[C[C[C[C[C[C[C[C[Cinclude <time.h>[B[A[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[B#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 [1;5x[3;1;1;120;120;1;0x*/

int main(void)
{
int n:

srand(time(0));
n = rand() - RAND_MAX / 2:

if (n==0)
{
printf("%i is zero\n", n):
}

else if (n<0)
printf("%i isnegativ[D[D[D[D[D[D[D n[B[C[C[ negative\n", n);
}

else
{
printf("%i is positive\n", n):
}

return (0);

}
