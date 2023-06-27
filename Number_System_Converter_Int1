#include <stdio.h>
void conv(int p);
int main()
{
    int p;
    char ch;
    char cn;
    while(1)
    {
        printf("Press 'b' for conversion to binary no.\n");
        printf("Press 'o' for conversion to octal no.\n");
        printf("Press 'h' for conversion to hexadecimal no.\n");
        scanf("\n%c",&ch);
        if(ch=='b' || ch=='B')
        {
            p=2;
            conv(p);
        }
        else if(ch=='o' || ch=='O')
        {
            p=8;
            conv(p);
        }
        else if(ch=='h' || ch=='H')
        {
            p=16;
            conv(p);
        }
        else
        {
            printf("Invalid choice.Try again\n");
        }
        printf("\n");
        printf("Do you want to continue? Press Y/N\n");
        scanf("\n%c",&cn);
        if(cn=='y' || cn=='Y')
        {
            continue;
        }    
        else if(cn=='n' || cn=='N')
        {
            printf("Program finished");
            break;
        }
        else
        {
            printf("Terminated due to invalid choice entered");
        }
    }
    return 0;
}            
void conv(int p)
{
      int n,c=0,s=0,i,j;
      int arr[20];
      printf("Enter a number: ");
      scanf("%d",&n);
      while(n!=0)
      {
                i=n%p;
                arr[c]=i;
                n=n/p;
                c++;
      }
      for(j=c-1;j>=0;j--)
      {
          switch(arr[j])
          {
              case 10:
              printf("A");
              break;
              case 11:
              printf("B");
              break;
              case 12:
              printf("C");
              break;
              case 13:
              printf("D");
              break;
              case 14:
              printf("E");
              break;
              case 15:
              printf("F");
              break;
              default:
              printf("%d",arr[j]);
          }
      }
}
