#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    char a[50][50]={"  ####################",
                    "  #O       #         #",
                    "  ########   ####### #",
                    "  ###   ##### # ###  #",
                    "  ##  # #       ### ##",
                    "  #  ##   ### # ### ##",
                    "  #    ####   # ##  ##",
                    "  # ####### ##     ###",
                    "  ###   #   ##########",
                    "<-    #   #  ###YZC's#",
                    "  ####################",
                   };
    int i,x,y,p,q;
    char ch;

    system("color f0");
    x=1; y=3; p=9; q=2;
    for(i=0;i<=10;i++)
       puts(a[i]);
    while(x!=p || y!=q)
    {
        ch=getch();
      if(ch=='s')
    {
         if(a[x+1][y]!='#')
         { 
              a[x][y]=' ';
              x++;
              a[x][y]='O';
         }        
    }

    if(ch=='w')
    {
        if(a[x-1][y]!='#')
        {
            a[x][y]=' ';
            x--;
            a[x][y]='O';
        }
    }

    if(ch=='a')
    {
        if(a[x][y-1]!='#')
        {
           a[x][y]=' ';
           y--;
           a[x][y]='O';
        }
    }

    if(ch=='d')
    {
       if(a[x][y+1]!='#')
       {
           a[x][y]=' ';
           y++;
           a[x][y]='O';
       }
    }
    system("cls");
    for(i=0;i<=10;i++)
        puts(a[i]);
    }
    system("cls");
    printf("you win!\n");
    system("pause");           
    return 0;
}
