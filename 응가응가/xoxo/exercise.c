#include <stdio.h>
#include <Windows.h>
#include <conio.h>

void gotoxy(int x, int y)

{

    COORD pos = { x-1,y-1 };

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}
int main() {
    char c;
    
   

    gotoxy(2, 2);
    printf("input>");

    int done = 1;
    int input_x = 9;
    int error_y = 3;

    while (done) 
    {
        c = _getch();

        if (c >= '0') 
        if (c <= '9') 
        {
          gotoxy(input_x, 2);
          printf("%c", c);
           done = 0;


         }
         if (c > '9') 
          {
                gotoxy(2,error_y);
                printf("Invalid input. Please enter a number. ");
          }
        
                        if (c < '0')    
                            {
                                gotoxy(2,error_y);
                                printf("Invalid input. Please enter a number.");
                            }
        
    }
    return 0;
}
