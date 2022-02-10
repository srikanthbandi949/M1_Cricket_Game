/**
 * @file hadcricket.h
 * @author Srikanth Bandi
 * @brief source files
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// #include<stdio.h>
// #include<string.h>
// #include<time.h>
// #include<stdlib.h>
#include "handcricket.h"


int batting(char battingplayer[],char bowlingplayer[],int oversToplay)
{
 int i,j,battingScore,sum=0,bowlerSocre,flag=1;
 char c;
 if(oversToplay>0)
 {
  for(i=1;i<=oversToplay;i++)
  {
   for(j=1;j<=6;j++)
   {
    printf("%d.%d ball\n",i,j);
    printf("%s Press Enter key to bowl :",bowlingplayer);
    fflush(stdin);
    scanf("%c",&c);
    fflush(stdin);
    bowlerSocre=(int)rand()%7;//Generate from 0-6 where 0 means no ball
    printf("%s Press Enter key to bat :",battingplayer);
    fflush(stdin);
    scanf("%c",&c);
    fflush(stdin);
    battingScore=rand()%7;//Generate 0-6 runs
    if(battingScore==bowlerSocre)
    {
     flag=0;
     printf("--------------------->  %s is Out  <-----------------------\n",battingplayer);
     printf("%s Total Score=%d\n",battingplayer,sum);
     if(sum==0)
            printf("--------------------->  Hehehe Duck Out  <-----------------------\n");
     break;
    }
    else
    {
     printf("Got %d runs\n",battingScore);
                    if(battingScore==6)
                    printf("Sixerrrrrr Keep it Up\n");
                    if(battingScore==4)
               printf("Its a Four\n");
     sum=sum+battingScore;
     printf("%s Score=%d\n",battingplayer,sum);
    }
   }
   if(flag==0)
   break;
  }
 
  return(sum);
 }
   if(oversToplay==0)
   {
      while(flag)
      {
        printf("%s Press Enter key to bowl :",bowlingplayer);
  fflush(stdin);
  scanf("%c",&c);
  fflush(stdin);
  bowlerSocre=(int)rand()%7;//Generate from 0-6 where 0 means no ball
  printf("%s Press Enter key to bat :",battingplayer);
  fflush(stdin);
  scanf("%c",&c);
  fflush(stdin);
  battingScore=rand()%7;//Generate 0-6 runs
  if(battingScore==bowlerSocre)
  {
   flag=0;
   printf("--------------------->  %s is Out  <------------------->\n",battingplayer);
   printf("%s Total Score=%d\n",battingplayer,sum);
   if(sum==0)
   printf("--------------------->  Hehehe Duck Out  <---------------------\n");
   break;
  }
  else
  {
   printf("Got %d runs\n",battingScore);
            if(battingScore==6)
            printf("Sixerrrrrr Keep it Up\n");
            if(battingScore==4)
       printf("Its a Four Great Man\n");
   sum+=battingScore;
   printf("%s Score=%d\n",battingplayer,sum);
  }
      }
      return(sum);
   }
 
}