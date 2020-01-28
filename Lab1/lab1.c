#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<signal.h>


void alarmHandler(int signo)
{
    printf("Alarm signal sent!\n");
}

void handle_sigint(int signo)
{
	printf("signal = %d",signo);
}

int main()
{
	// Creat()


	// int fd,fd1,y;
	// char c[100];

	//fd = creat("test.txt", S_IRWXU);

	// printf("%d\n",fd);



	
	
	
	
	// Open()

	 
	// fd = open("test.txt", O_RDWR);

	// printf("%d\n", fd);

	// Close()

	// int x;
	// x = close(fd);
	// printf("%d\n",x);
	


	
	
	
	
	// Read()


	// fd = open("test.txt", O_RDWR);
	// char d[21];

	// y = read(fd, c, 7);
	// c[y] = '\0';
	// printf("y = %d\nc = %s\n",y, c);

	
	
	
	
	
	// Write()

	// y = write(fd, " is programmer", 14);
	// printf("y = %d\n",y);






	//lseek()

	// y = lseek(fd,0,SEEK_END);
	// y = write(fd, " is programmer", 14);        // how to prevent next line? 
	// y = lseek(fd,0,SEEK_SET);
	// y = read(fd,c,14);

	// c[y] = '\0';
	// printf("c = %s\n",c);

	// y = lseek(fd,-3,SEEK_CUR);

	// y = write(fd,"abc",3);






	// // link()

	// int n = link("test.txt","test1.txt");
	// printf("n = %d\n",n);
	// 											// change made in one will be visible in other
	// y = write(fd,"12345678901234", 14);

	

	// unlink("test1.txt");





	
	// access()
	// int result = access("test.txt",F_OK);
	// if(result==0)printf("File exists\n");






	

	//chmod()

	// int result;
	// result = access("test.txt",X_OK);
	// if(result==0)
	// {
	// 		printf("file is executable\n");
	// }
	// result = chmod("test.txt",S_IRUSR);
	// result = access("test.txt",X_OK);
	// printf("result = %d\n",result);

	// fork();
	// printf("omanshu\n");
	// exit(0);
	// printf("parent\n");




	//execl()

	//execl("/bin/ls","ls",(char *) NULL);   //null gets cast to char









	//fork()

	// fork();
	// printf("omanshu\n");
	// exit(0);
	// printf("parent\n");


	
   




	
	// wait() 
	// pid_t cpid; 
    // if (fork()== 0) 
    //     exit(0);           
    // else
    //     cpid = wait(NULL);


    // printf("Parent pid = %d\n", getpid()); 
    // printf("Child pid = %d\n", cpid); 


	// if (fork()== 0) 
    //     printf("HC: hello from child\n"); 
    // else
    // { 
    //     printf("HP: hello from parent\n"); 
    //     wait(NULL); 
    //     printf("CT: child has terminated\n"); 
    // } 
  
    // printf("Bye\n"); 






	//exit()

	// if(fork())
	// {
	// 	printf("hello from parent\n");
	// 	exit(0);
	// }
	// else
	// {
	// 	printf("hello from child\n");
	// }

	// printf("parent terminated\n");







	// phandle_sigint user ID is %d\n",getuid());
	// phandle_sigintctive user ID is %d\n",geteuid());
	// phandle_sigintup ID is%d\n",getgid());
	// phandle_sigintctive group ID is %d\n",getegid());




	
	// ihandle_sigint
	// {handle_sigint
	// 	handle_sigint id of this process (from child)= %d\nParent id of this process (from child)= %d\n",getpid(),getppid());
	// }handle_sigint
	// else
	// {
	// 	printf("current id of this process (from parent)= %d\n",getpid());
	// 	printf("parent id of this process (frmo parent) = %d\n",getppid());
	// }





	
	// while(1)
	// {
	// 	printf("infinite loop\n");
	// 	sleep(1);
	// 	signal(SIGINT,caught_signal);
	// }

	// signal(SIGALRM, alarmHandler);
	// alarm(5);

	// while(1);
	
	// printf("hello\n");





	signal(SIGINT, handle_sigint); 
    while(1) 
    { 
        printf("hello world\n"); 
        sleep(1); 
    } 
    return 0; 

	



	// if(fork())
	// {
	// 	printf("hello from parent\n");
	// 	kill(getpid(), SIGKILL);
	// }
	// else
	// {
	// 	printf("hello from child\n");
	// }

	// printf("parent terminated\n");







	// chdir("..");
	// execl("/bin/pwd","pwd",(char *) NULL);   //null gets cast to char	

}

