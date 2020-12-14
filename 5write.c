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
    struct Telephone input[10]={{"Hallam","Rawlings","7456760513"},
                                {"Nabila","Southern","5705827048"},
                                {"Freja", "Gilmour", "9819889790"},
                                {"Cruz","Whittington","7026166710"},
                                {"Rayan","Horse","8822657340"},
			        {"Pearson","Bridge","794523399"},
                                {"Herbert","Bull","8595665682"},
                                {"Edberg","Corney","8952345681"}};					
    file = fopen ("file1(5).txt", "w"); 
    if (file == NULL) 
    { 
        printf("Cannot) open file \n"); 
        exit(0); 
    } 
      
    for(int i=0;i<10;i++)
    		fwrite(&input[i], sizeof(struct Telephone),1, file);
    
    
    fclose (file); 
}	