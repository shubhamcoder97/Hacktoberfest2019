#include<stdio.h>
#include<string.h>
#include<mpi.h>
#define MASTER 0
void main()
{
	char s[]="Priyabrata";
	int MAX_STRING=100;
	int comm_sz,q,c=0;
	int my_rank;
	MPI_Init(NULL,NULL);
	MPI_Comm_size(MPI_COMM_WORLD,&comm_sz);
	MPI_Comm_rank(MPI_COMM_WORLD,&my_rank);
	if(comm_sz%2==0)
	{
			printf("%s",s);	
		//	MPI_Send(s,strlen(s)+1,MPI_CHAR,0,0,MPI_COMM_WORLD);
			}
	else
	{	
		
//			MPI_Recv(s,MAX_STRING,MPI_CHAR,q,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
//			printf("%s",s);

		printf("Error");
	}		
MPI_Finalize();
}
