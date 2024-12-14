#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, k, req[50], mov = 0, cp, index[50], min, a[50], j = 0, mini, cp1;

    printf("Enter the current position: ");
    scanf("%d", &cp);
    cp1 = cp;

    printf("Enter the number of requests: ");
    scanf("%d", &n);

    printf("Enter the request sequence:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &req[i]);
    }

    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {

            if (req[i] != -1)
            {
                index[i] = abs(cp - req[i]);
            }
            else
            {
                index[i] = 9999;
            }
        }

        min = index[0];
        mini = 0;
        for (i = 1; i < n; i++)
        {
            if (index[i] < min)
            {
                min = index[i];
                mini = i;
            }
        }

        a[j++] = req[mini];
        cp = req[mini];
        req[mini] = -1;
    }

    printf("Sequence is: ");
    printf("%d", cp1);
    mov = abs(cp1 - a[0]);
    printf(" -> %d", a[0]);

    for (i = 1; i < n; i++)
    {
        mov += abs(a[i] - a[i - 1]);
        printf(" -> %d", a[i]);
    }
    printf("\n");

    printf("Total head movement = %d\n", mov);

    return 0;
}







