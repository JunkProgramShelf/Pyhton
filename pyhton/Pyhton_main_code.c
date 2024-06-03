/*
*Pyhton is a joke program. This program makes no sense.
*
*Programing by JunkProgramShelf in 2023.
*/

#include<stdio.h>
#include <stdbool.h>
#include<stdlib.h>
#include<string.h>
#include"Pyhton.h"


void main(int argc,char *argv[]){
	Pyhton_Starting();
	
	int i=0,j=0;
	bool pyh_flag=true;
	char command[256]="";
	double num1=0;
	double num2=0;
	
	//Check_Argument(argc,argv);
	
	printf("Start Pyhton\n");
	while(pyh_flag){
		
		printf(">>>");
		fgets(command,sizeof(command),stdin);
		Check_Command(command,pyh_flag);
		
		memset(command, 0, sizeof(command) );
		if(pyh_flag==false){break;}
	}
	
	//print_sl();
	//Clear_Console();
}