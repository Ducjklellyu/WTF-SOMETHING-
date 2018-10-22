#include <stdio.h>
#include <stdlib.h>
#define CORD_SIZE 40

char sqaere[CORD_SIZE][CORD_SIZE];
void printspace()
{
    for(int i=0;i<CORD_SIZE;i++)
    {
    for(int j=0;j<CORD_SIZE;j++)
    {

 printf("%c",sqaere[i][j]);
    }
printf("\n");

}

}
int main()
{
  for(int i=0;i<CORD_SIZE;i++)
    {
    for(int j=0;j<CORD_SIZE;j++)
    {

    sqaere[i][j]=' ';
    }

}
int x1=rand()%39+1;
int y1=rand()%39+1;

int x=20,y=20;
do{

system("CLS");
sqaere[x][y]='X';
sqaere[x1][y1]='O';

int rand1=rand()%4+1;
if(rand1=3&&x1>1)
{
    sqaere[x1][y1]=' ';
    sqaere[x1-=3][y1]='O';
}
else if(rand1=2&&x1<39)
{
     sqaere[x1][y1]=' ';
    sqaere[x1+=10][y1]='O';
}
sqaere[x1][y1]=' ';
    sqaere[x1-=2][y1]='O';

    sqaere[x1][y1]=' ';
    sqaere[x1][y1+=rand1]='O';
     sqaere[x1][y1]=' ';
    sqaere[x1][y1-=rand1+2]='O';
/*if(y1>1)
{
     sqaere[x1][y1]=' ';
    sqaere[x1][--y1]='O';
}
*/
printspace();

   if(kbhit()){
                    int click=getch();
                    if(click=='W'||click=='w'&&x>1){
                       sqaere[x][y]=' ';
                        sqaere[--x][y]='X';

                    }
                    if(click=='S'||click=='s'&&x<38){
                       sqaere[x][y]=' ';
                        sqaere[++x][y]='X';

                    }

                    if(click=='A'||click=='a'&&y>1){
                       sqaere[x][y]=' ';
                        sqaere[x][--y]='X';

                    }
                       if(click=='D'||click=='d'&&y<39){
                        sqaere[x][y]=' ';
                        sqaere[x][++y]='X';

                    }
                    }
                    if(sqaere[x][y]=='O')
                    {
                        system("CLS");
                        break;
                    }


}while(1);
system("PAUSE");

    return 0;
}
