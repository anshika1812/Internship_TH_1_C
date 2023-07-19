#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(NULL));
    int num,choice=0;
    char Once_more;
    int Keep_playing=1;
    while(Keep_playing)
    {
        num=rand()%100+1;
        while(choice!=num)
        {
        printf("Enter your choice\n");
        scanf("\n%d",&choice);
        if(choice<1 || choice>100)
        {
            printf("Invalid choice\n");
	        break;
        }
	    else if((num<=choice+99 && num>=choice+70) || (num>=choice-99 && num<=choice-70))
	    {
	        printf("Too far!!");
	        if(choice>num)
	        {
	            printf("The number you chose is much larger!\n");
	        }
	        else
	        {
	            printf("The number you chose is much smaller!\n");
	        }
	        continue;
	    }
	    else if((num<=choice+69 && num>=choice+40) || (num>=choice-69 && num<=choice-40))
	    {
	        printf("Quite far!!");
	        if(choice>num)
	        {
	            printf("The number you chose is quite larger!\n");
	        }
	        else
	        {
	            printf("The number you chose is quite smaller!\n");
	        }
	        continue;
	    }
	    else if((num<=choice+39 && num>=choice+10) || (num>=choice-39 && num<=choice-10))
	    {
	        printf("A bit far!!");
	        if(choice>num)
	        {
	            printf("The number you chose is a bit larger!\n");
	        }
	        else
	        {
	            printf("The number you chose is a bit smaller!\n");
	        }
	        continue;
	    }
	    else if((num<=choice+9 && num>=choice+1) || (num>=choice-9 && num<=choice-1))   
	    {
	        printf("You are close!!");
	        if(choice>num)
	        {
	            printf("But the number you chose is a little larger!\n");
	        }
	        else
	        {
	            printf("But the number you chose is a little smaller!\n");
	        }
	        continue;
	    }
	    else
	    {
	        printf("You got it right!! The lucky number is %d\n",num);
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
