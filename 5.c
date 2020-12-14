#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Telephone
{
	char fname[20];
	char lname[20];
	char tnumber[20];
};

void main()
{
    FILE *file; 
    struct Telephone input; 
    struct Telephone details[10]; 
    int i=0; 
     
    file = fopen ("file1.txt", "r"); 
    if (file == NULL) 
    { 
        printf("Cannot) open file \n"); 
        exit(0); 
    } 
      

    while(fread(&input, sizeof(struct Telephone),1, file))
    {
  
     strcpy(details[i].fname,input.fname);
     strcpy(details[i].lname,input.lname);
     strcpy(details[i].tnumber,input.tnumber);
     printf("Name=%s %s Telephone=%s\n",details[i].fname,details[i].lname,details[i].tnumber);
     i++;
    }
    printf("\n1)Sort names\n2)Sort according to numbers\n");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
                
                for(i=0;i<10;i++)
                  for(int j=i+1;j<10;j++)
                    if((strcmp(details[i].fname,details[j].fname)>0))
                    {
                       strcpy(input.fname,details[i].fname);
                       strcpy(input.lname,details[i].lname);
                       strcpy(input.tnumber,details[i].tnumber);   
                       strcpy(details[i].fname,details[j].fname);
                       strcpy(details[i].lname,details[j].lname);
                       strcpy(details[i].tnumber,details[j].tnumber);
                       strcpy(details[j].fname,input.fname);
                       strcpy(details[j].lname,input.lname);
                       strcpy(details[j].tnumber,input.tnumber);
                    }
                    for (i = 0; i < 10 ; i++)
                    {
                        printf("Name=%s %s Telephone=%s\n",details[i].fname,details[i].lname,details[i].tnumber);
                    }
                    break;

        case 2:
                
                for(i=0;i<10;i++)
                  for(int j=i+1;j<10;j++)
                    if(strcmp(details[i].tnumber,details[j].tnumber)>0)
                    {
                       strcpy(input.fname,details[i].fname);
                       strcpy(input.lname,details[i].lname);
                       strcpy(input.tnumber,details[i].tnumber);
                       strcpy(details[i].fname,details[j].fname);
                       strcpy(details[i].lname,details[j].lname);
                       strcpy(details[i].tnumber,details[j].tnumber);
                       strcpy(details[j].fname,input.fname);
                       strcpy(details[j].lname,input.lname);
                       strcpy(details[j].tnumber,input.tnumber);
                    }
                    for (int i = 0; i < 10 ; i++)
                    {
                        printf("Name=%s %s Telephone=%s\n",details[i].fname,details[i].lname,details[i].tnumber);
                    }
                    break;
        default:
                printf("\nWrong choice");

    }
    fclose (file); 
}