
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <errno.h>
int main(int argc,char *argv[])
{
	int mod[2];
	int i,j;
	if(pipe(mod)<0)
		exit(0);
	int pid=fork();
	if(pid == -1)
	{
		printf("no fork ,error\n");
		exit(0);
	}
	else
		if(pid == 0)
		{
			close(mod[0]);
			int vowels = 0;
			printf("child process, pid = %u\n",getpid());
			fflush(stdout);
			for(i=1;i<argc;i++)
				for(int j=0;argv[i][j]!='\0';j++)
				{
					if(argv[i][j]=='a' || argv[i][j]=='e' || argv[i][j]=='i' || argv[i][j]=='o' || argv[i][j]=='u')
						vowels++;
				}
				write(mod[1],&vowels,sizeof(vowels));
				close(mod[1]);
				exit(2);
		}
		else
		{
			close(mod[1]);
			int vowels;
			printf("Parent id:%d\n",getpid());
			printf("Parent process\n");
			wait(NULL);
			printf("Parent printing\n");
			read(mod[0],&vowels,sizeof(vowels));
			close(mod[0]);
			printf("vowel count in command line arguments is %d\n",vowels);

		}
}