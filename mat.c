#include"mini.h"

int main()
{
        struct matrix mat;
        int var;
        srand (time(0));

       int i,j,k;                                          //declaration
       for(i=0;i<4;i++)
        {
         for(j=0;j<3;j++)
          {
            for(k=0;k<2;k++)
             {

                mat.arr[i][j][k]=rand()%1000+1;                    //rand function
             }

          }
        }
       display(mat);
	var=assign(&mat);
	printf("\n%d\n",var);
	if(var%10==0)
	{
		int n;
		printf("enter no.of rows");                       //taking input from the user
		scanf("%d",&n);
		pattern(n);
	}
       if(var%2==0)
	{
		char str1[50], str2[50], c;

   		 printf("\nEnter first string: ");                //taking input for str1
    	          scanf("%s",str1);
               	printf("\n");
                printf("Enter second string: ");                  //taking input for str2
                scanf("%s",str2);
                int (*fptr)(char[],char[]);
                fptr=compare;
                c = fptr(str1, str2);
               if (c)
              {
                                                 //this statement will be printed if both strings are equal
                 printf("strings are equal");
               }
           else
            {
                                                //this statement will be printed if both strings are not equal
       	     printf("strings are not equal");
            }
       }
	else 

	{
		 char str[50], c;

                 printf("\nEnter any string: ");

                                                       //taking input for str1
                 scanf("%s",str);
                  printf("\n");
                  printf("Enter character to search: ");              //taking input for str2 
                  scanf("%s",&c);
                  int count=0;
                  int i=0;
                  while(str[i]!='\0')
                {
	           if(str[i]==c)
	            {
		        count++;
	            }
	         i++;
               }
             printf("Total occurences are '%c' =%d",c,count);
          }
	return 0;

   }
        


