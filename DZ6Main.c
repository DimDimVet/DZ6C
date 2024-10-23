#include <stdio.h>
#include <stdbool.h>

char oneWrite[] = "1 - Output 0-9 While cycling";
char twoWrite[] = "2 - Tabl Pythagoras";
char threeWrite[] = "3 - Numbers in that sequence";
char zeroWrite[] = "0 - Stop run DZ6";
int argI = 9; // по заданию значение 9
//
void menuConsole();
void whileCycling();
void tablPythagoras();
void numberSequence();
void printInDataConsole(int volume[], int size);
//
int main()
{
    printf("Executer DZ6\n\n");
    menuConsole();
    return 0;
}
//
void menuConsole()
{
    printf("%s\n%s\n%s\n%s\n\n", oneWrite, twoWrite, threeWrite, zeroWrite);

    char pressButton;
    pressButton = getch();

    switch (pressButton)
    {
    case '1':
        printf("Run command %s\n", oneWrite);
        whileCycling();
        break;
    case '2':
        printf("Run command %s\n", twoWrite);
        tablPythagoras();
        break;
    case '3':
        printf("Run command %s\n", threeWrite);
        numberSequence();
        break;
    case '0':
        printf("%s\n", zeroWrite);
        return;
    default:
        printf("Press number command error\n");
        break;
    }

    menuConsole();
}
void whileCycling()
{
    while (argI >= 0)
    {
        printf("iteration while argument = %i\n", argI);
        argI--;
    }
}
void tablPythagoras()
{
    for (int i = 1; i < 10; i++)
    {
        for (int y = 1; y < 10; y++)
        {
            printf("%i x %i = %i\n", i, y, i * y);
        }
        printf("\n");
    }
}
void numberSequence()
{
    int const size=5;
    int inVolume;
    int volume[size] = {};
    int volumeSequence[size]={};

    while (inVolume != 0)
    {
        scanf("%d", &inVolume);
        for (int i = 0; i < size; i++)
        {
            if (volume[i] == 0)
            {
                volume[i] = inVolume;
                printInDataConsole(volume, size);
                break;
            }
        }
        
        //for()


    }
}
void printInDataConsole(int volume[], int size)
{
    printf("in data -> ");
    for (int i = 0; i < size; i++)
    {
        if (volume[i] != 0)
        {
            printf("%i ", volume[i]);
        }
    }
    printf("\n");
}