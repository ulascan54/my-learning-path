#include <stdio.h>
#include <string.h>

int B[] = {4, 4, 4, 4, 4, 4, 9, 9, 9, 9, 9, 6, 7, 7, 7, 7, -1};
int size = (sizeof(B) / sizeof(B[0]));

void toEncode(int *A, int *Encode)
{
    int x = 0;
    for (int i = 0; i < size; i++)
    {
        if (A[i] == -1)
        {
            Encode[x] = -1;
            break;
        }

        int count = 0;
        Encode[x] = A[i];

        while (1)
        {
            if (Encode[x] != A[i])
            {
                break;
            }
            count++;
            i++;
        }
        i--;
        x++;
        Encode[x] = count;
        x++;
    }
}

void toDecode(int *A, int *Encode)
{
    int i = 0;
    int x = 0;
    while (1)
    {
        if (Encode[i] == -1)
        {
            A[x] = -1;
            break;
        }

        for (int j = 0; j < Encode[i + 1]; j++)
        {
            A[x] = Encode[i];
            x++;
        }
        i += 2;
    }
}

int main()
{

    int Encode[size];

    toEncode(B, Encode);
    int i = -1;
    printf("Encode-------------\n");

    while (Encode[i] != -1)
    {
        i++;
        printf("%d\n", Encode[i]);
    }
    int deCode[size];
    printf("Decode-------------\n");

    toDecode(deCode, Encode);
    int z = 0;
    while (deCode[z] != -1)
    {
        z++;
        printf("%d\n", deCode[z]);
    }
    return 0;
}
