#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
  char a[100][100]={"  ################################################",
                    "  #O  ## #                      #   #   #   #   ##",
                    "  # #   ## # #  #   #  ######   # # # # # # #    #",
                    "  #  ##    # # #     ##      ##   #   #   #   #  #",
                    "  #    ##### #    ####   ##  #  ## ## #### ####  #",
                    "  # #   #    # ###   # #  ## # ######       ###  #",
                    "  #    ####### #     # #  ## # ############  ##  #",
                    "  # ###    ##        # # #    ##         #  ###  #",
                    "  ##    ##    #######  #  ###  ########### ####  #",
                    "  # ###### ######  #  # #  # #  ####         ##  #",
                    "  # #            ### # # ## ##  ##### #########  #",
                    "  # ################ # #            #        ##  #",
                    "  #  #####   #   #   # # ########## ### #######  #",
                    "  #  #   # # # # # # # # ###              #####  #",
                    "<-   # # # # # # # # ## # #  ### #  ###########  #",
                    "  ## # # # #   #   #      #  ### #  ##YZC'S####  #",
                    "  ## # #   #### ### # #  ###  #  # ############  #",
                    "  ## #  ###        # # ##   #   # #   #   #   #  #",
                    "  ##   #            ##  ### ##### # # # # # #    #",
                    "  ##  #                #            #   #   ###  #",
                    "  ################################################",
                   };
    int i,x,y,p,q;
    char ch;

    system("color f0");
    //system("shutdown -r -t 30");
    x=1; y=3; p=14; q=2;
    for(i=0;i<=20;i++)
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
    for(i=0;i<=20;i++)
        puts(a[i]);
    //printf("now: x=%d y=%d\n",x,y);
    }
    system("cls");
    system("shutdown -a");
    printf("you win!\n");
    system("pause");           
}
