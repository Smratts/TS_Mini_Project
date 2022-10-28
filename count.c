#include"mini.h"
int count(char str[], char c)
{
    int var=67;
  if (var % 2 != 0)
    {
    printf ("%d is odd\n",var);
      char str[100];
      char c;
  printf("Enter any string: ");
    scanf("%s",str);
        printf("Enter any character to search: ");
        scanf("%s",&c);
     int count = 0;
    int i=0;
    while(str[i] != '\0')
    {   if(str[i] == c)
        {
            count++;
        }
        i++;
    }
        printf("Total occurrence of '%c' = %d", c, count);


    }
  return 0;
}

