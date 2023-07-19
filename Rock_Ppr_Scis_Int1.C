#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//Creating rock-paper-scissors program...where your default opponent is your computer!
//The computer's moves will be absolutely unpredictable ;) & you can chose your own moves.

//After one set, the player(i.e. me ;)) could decide whether to play ahead or not.
//And yes...after each set the player comes to know who has won or if it's a tie!
//The rules are pretty simple....
//•Rock defeats scissors•
//•Scissors defeat paper•
//•Paper defeats rock•
//No cheats ;) It would be a 100% fair play :)

//In this code I am assuming computer's move as 'CYmove' & player's move as 'MYmove' :)
int main()
{
    srand(time(NULL));
    int CYmove,MYmove;
    char Once_more;
    int Keep_playing=1;
    while(Keep_playing)
    {
        CYmove=rand()%3;
        printf("Press '0' for Rock\nPress '1' for Paper\nPress '2' for Scissors\n");
	    printf("What do you chose : Rock, Paper or Scissors?\n");
	    scanf("\n%d",&MYmove);
	    //Now let's declare who has won
	    if(MYmove>2 || MYmove<0)
	    {
	        printf("Invalid choice ");
	        break;
	    }
	    else if(CYmove==MYmove)
	    {
	        printf("It is a Tie -_-\n");
	    }
	    else if (CYmove==0)
	    {
	        printf("The computer chose Rock!\n");
	        if(MYmove==1)
	        {
	            printf("You win :)\n");
	        }
		    if(MYmove==2)
		    {
		        printf("Computer wins :( Better luck next time!\n");
		    }
	    }
	     else if (CYmove==1)
	    {
	        printf("The computer chose Paper!\n");
	        if(MYmove==2)
	        {
	            printf("You win :)\n");
	        }
		    if(MYmove==0)
		    {
		        printf("Computer wins :( Better luck next time!\n");
		    }
	    }
	      else if (CYmove==2)
	    {
	        printf("The computer chose Scissors!\n");
	        if(MYmove==0)
	        {
	            printf("You win :)\n");
	        }
		    if(MYmove==1)
		    {
		        printf("Computer wins :( Better luck next time!\n");
		    }
	    }
	printf("Do you wanna play again? Y/N\n");
	scanf("\n%c",&Once_more);
	if(Once_more=='Y' || Once_more== 'y')
	{
		Keep_playing=1;
		printf("Yes! I knew it :) Let\'s go then...\n");
	}
	else
	{
		printf("Bye then...See you later •_•");
		Keep_playing=0;
	}
    }
    return 0;
}
//I'm sure you would have fun playing!
