#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int winner[5],trial[5];

void score_calc(int,char,int,char,int,char,int,char,int,char);
void different_numbers(int,int,int,int,int,int[]);

void main()
{
  FILE *fp = fopen("input.txt", "r");
  char buff[255];
  int p1_number[5],p2_number[5],p3_number[5];
  char p1_suit[5],p2_suit[5],p3_suit[5];

  //while
  (fgets(buff,255,(FILE*)fp));
  //{


  //}
  int buffer[26];
  for(int i=0;i<26;i++)
  {
    if(buff[i]=='2')buffer[i]=2;
    else if(buff[i]=='3')buffer[i]=3;
    else if(buff[i]=='4')buffer[i]=4;
    else if(buff[i]=='5')buffer[i]=5;
    else if(buff[i]=='6')buffer[i]=6;
    else if(buff[i]=='7')buffer[i]=7;
    else if(buff[i]=='8')buffer[i]=8;
    else if(buff[i]=='9')buffer[i]=9;
    else if(buff[i]=='1')buffer[i]=10;
    else if(buff[i]=='J')buffer[i]=11;
    else if(buff[i]=='Q')buffer[i]=12;
    else if(buff[i]=='K')buffer[i]=13;
    else if(buff[i]=='A')buffer[i]=14;
    else buffer[i]=0;
  }

  p1_number[0]=buffer[0];p1_suit[0]=buff[1];p1_number[1]=buffer[3];p1_suit[1]=buff[4];
  p2_number[0]=buffer[6];p2_suit[0]=buff[7];p2_number[1]=buffer[9];p2_suit[1]=buff[10];
  p3_number[0]=buffer[12];p3_suit[0]=buff[13];p3_number[1]=buffer[15];p3_suit[1]=buff[16];

  p1_number[2]=buffer[18];p1_suit[2]=buff[19];p2_number[2]=buffer[18];
  p2_suit[2]=buff[19];p3_number[2]=buffer[18];p3_suit[2]=buff[19];

  p1_number[3]=buffer[21];p1_suit[3]=buff[22];p2_number[3]=buffer[21];
  p2_suit[3]=buff[22];p3_number[3]=buffer[21];p3_suit[3]=buff[22];

  p1_number[4]=buffer[24];p1_suit[4]=buff[25];p2_number[4]=buffer[24];
  p2_suit[4]=buff[25];p3_number[4]=buffer[24];p3_suit[4]=buff[25];
  for(int i=0;i<26;i++)
    printf("%d ",buffer[i]);
  printf("\n" );
  for(int i=0;i<26;i++)
      printf("%c ",buff[i]);
  printf("\n" );
//  printf("%d\n",p1_number[4]);
  int x[5];
  score_calc(p1_number[0],p1_suit[0],p1_number[1],p1_suit[1],p1_number[2],p1_suit[2],
    p1_number[3],p1_suit[3],p1_number[4],p1_suit[4]);
  fclose(fp);
}

void score_calc(int card1n,char card1s,int card2n,char card2s,int card3n,
  char card3s,int card4n,char card4s,int card5n,char card5s)
{
  int x[5]={0,0,0,0,0};
  //int diff_num=
  printf("%c\n",card5s );
  different_numbers(card1n,card2n,card3n,card4n,card5n,x);
}

void different_numbers(int card1n,int card2n,int card3n,int card4n,int card5n,int x[5])
{
  int y[5]={card1n,card2n,card3n,card4n,card5n};
  for(int i=0;i<5;i++)
    printf("%d\n",y[i] );
  int check[5]={0,0,0,0,0},dummy[5]={0,0,0,0,0},count=0;
  for(int i=0;i<5;i++)
  {
    int flag=0;
    for(int j=0;j<count;j++)
    {
      if(y[i]==dummy[j])
        {
          printf("yes\n");
          check[j]++;
          flag=1;
        }
    }
    if(flag==0)
      {
        dummy[count]=y[i];
        check[count]++;
        count++;
      }
  }
  for(int i=0;i<5;i++)
  {
    printf("\n%d",check[i]);
  }
}
