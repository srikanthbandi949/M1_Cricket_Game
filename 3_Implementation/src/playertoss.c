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



#include "handcricket.h"

int PlayerToss(char player1[],char player2[],int oversToplay)
   {
      int player1Choice,player2Choice,toss,player1Toss,batorbowlChoice,player2Score,player1Score;
      printf("%s --> Choose your choice either 1 for Head or 2 for Tail : ",player1);
      scanf("%d",&player1Choice);
      if(player1Choice==1)
      {
            player2Choice=2;
            printf("%s -> Choice is Tail\n",player2);
      }
      else if(player1Choice==2)
      {
         player2Choice=1;
         printf("%s -> Choice is Head\n",player2);
      }
      else
      {
         printf("------------------------------------------>  Invalid Choice  <------------------------------------------\n");
         return(0);
      }
      toss=rand()%2;
      toss=toss+1;
      if(toss==1){
         printf("Toss is Head\n");
      }
      else{
         printf("Toss is Tail\n");
      }

      if(toss==player1Choice)
      {
         player1Toss=1;
         printf("Player 1 %s Won the Toss\n",player1);
         printf("Choose\n1 - Batting\n2 - Bowl: ");
         scanf("%d",&batorbowlChoice);
         if(batorbowlChoice==1)
         {
            printf("--------------------->  %s is Going to bat Now  <-----------------------\n",player1);
            player1Score=batting(player1,player2,oversToplay);
            printf("--------------------->  %s is Going to bat Now  <-----------------------\n",player2);
            player2Score=batting(player2,player1,oversToplay);
            printf("--------------------->  Its Time for Results  <-----------------------\n");
         }
         else
         {
            printf("--------------------->  %s is Going to bat Now  <-----------------------\n",player2);
            player2Score=batting(player2,player1,oversToplay);
            printf("--------------------->  %s is Going to bat Now  <-----------------------\n",player1);
            player1Score=batting(player1,player2,oversToplay);
            printf("--------------------->  Its Time for Results  <-----------------------\n");
         }
      }
      else if(toss==player2Choice)
      {
         player1Toss=2;
         printf("Player 2 %s Won the Toss\n",player2);
         printf("\n1 - Batting\n2 - Bowl\nChoose : ");
         scanf("%d",&batorbowlChoice);
         if(batorbowlChoice==1)
         {
            printf("--------------------->  %s is Going to bat Now  <-----------------------\n",player2);
            player2Score=batting(player2,player1,oversToplay);
            printf("--------------------->  %s is Going to bat Now  <-----------------------\n",player1);
            player1Score=batting(player1,player2,oversToplay);
            printf("--------------------->  Its Time for Results  <-----------------------\n");
         }
         else
         {
            printf("--------------------->  %s is Going to bat Now  <-----------------------\n",player1);
            player1Score=batting(player1,player2,oversToplay);
            printf("--------------------->  %s is Going to bat Now  <-----------------------\n",player2);
            player2Score=batting(player2,player1,oversToplay);
            printf("--------------------->  Its Time for Results  <-----------------------\n");
         }
      }
      else
      {
         printf("---------------------------------------------->  Error  <-----------------------------------------------\n");
         return(0);
      }
      if(player1Score==player2Score)
      {
         printf("Draw Match\nThanks For Playing the Game\n");
      }
      if(player1Score>player2Score){
         printf("%s  score is : %d\n",player1,player1Score);
         printf("%s  score is : %d\n\n",player2,player2Score);
         printf("%s Won the Match\n\nThanks for Playing the Game\n",player1);
      }
      if(player1Score<player2Score){
         printf("\n%s  score is : %d\n",player1,player1Score);
         printf("%s  score is : %d\n\n",player2,player2Score);
         printf("%s Won the Match\nThanks for Playing the Game\n",player2);
      }
      return("\n",player1Toss);
}