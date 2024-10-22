#include <stdio.h>
#include <stdbool.h>

char oneWrite[] = "1 - Output 0-9 While cycling";
char twoWrite[] = "2 - Tabl Pythagoras";
char threeWrite[] = "3 - Numbers in that sequence";
char zeroWrite[] = "0 - Stop run DZ6";
//
void menuConsole();
void whileCycling();
void tablPythagoras();
void numberSequence();
//
int main()
{
    menuConsole();
    return 0;
}
//
void menuConsole()
{
    printf("Executer DZ6\n\n");
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

}
void tablPythagoras()
{

}
void numberSequence()
{

}