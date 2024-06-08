#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "Pyhton.h"


#define Ver "Version(^o^)"
char alphabet_data[78]={
	'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
	'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
	'1','2','3','4','5','6','7','8','9','0','!','\"','#','$','%','\'','(',')','-','=','@','+','*','<','>','\?'
};


//function name start [a] or [A]
void Add(){
	double num1=0;
	double num2=0;
	double ans=0;
	printf("Input num1=");
	scanf("%lf",&num1);
	printf("Input num2=");
	scanf("%lf",&num2);
	ans=num1+num2;
	printf("anser=%lf\n",ans);
}


//function name start [b] or [B]
//

void Bug(){
	int count=0;
	int line=0;
	srand((unsigned int)time(NULL));
	while(count<50000){
		printf("%c",alphabet_data[0 + rand() % 77]);
		if(line==200){
			printf("\n");
			line==0;
		}
		count++;
		line++;
	}
	printf("\n");
}

//function name start [c] or [C]

void Check_Command(char *c,bool flag){
	int i=0;
	bool check_flag=false;
	if(flag==false){
		Pyhton_Exit();
	}
	if(c[i]=='a' || c[i]=='A'){
		i++;
		if(c[i]=='d' || c[i] == 'D'){
			i++;
			if(c[i]=='d' || c[i] == 'D'){
				Add();
				check_flag=true;
			}
		}
	}else if(c[i]=='b' || c[i] == 'B'){
		i++;
		if(c[i]=='u' || c[i] == 'U'){
			i++;
			if(c[i]=='g' || c[i] == 'G'){
				Bug();
				check_flag=true;
			}
		}

	}else if(c[i]=='c' || c[i] == 'C'){
		i++;
		if(c[i]=='l' || c[i] == 'L'){
			i++;
			if(c[i]=='e' || c[i] == 'E'){
				i++;
				if(c[i]=='a' || c[i]=='A'){
					i++;
					if(c[i]=='r' || c[i] == 'R'){
						Clear_Console();
						check_flag=true;
					}
				}
			}
		}

	}else if(c[i]=='d' || c[i] == 'D'){

	}else if(c[i]=='e' || c[i] == 'E'){
		i++;
		if(c[i]=='x' || c[i] == 'X'){
			i++;
			if(c[i]=='i' || c[i] == 'I'){
				i++;
				if(c[i]=='t' || c[i] == 'T'){
					Pyhton_Exit();
					check_flag=true;
				}
			}
		}
	}else if(c[i]=='f' || c[i] == 'F'){

	}else if(c[i]=='g' || c[i] == 'G'){

	}else if(c[i]=='h' || c[i] == 'H'){
		i++;
		if(c[i]=='e' || c[i] == 'E'){
			i++;
			if(c[i]=='l' || c[i] == 'L'){
				i++;
				if(c[i]=='p' || c[i] == 'P'){
					Print_Help();
					check_flag=true;
				}else if(c[i]=='l' || c[i] == 'L'){
					i++;
					if(c[i]=='o' || c[i] == 'O'){
						Hello();
						check_flag=true;
					}
				}
			}
		}
	}else if(c[i]=='i' || c[i] == 'I'){
		while(c[i] != '\0'){
			
		}
	}else if(c[i]=='j' || c[i] == 'J'){
		while(c[i] != '\0'){
			
		}
	}else if(c[i]=='k' || c[i] == 'K'){

	}else if(c[i]=='l' || c[i] == 'L'){

	}else if(c[i]=='m' || c[i] == 'M'){

	}else if(c[i]=='n' || c[i] == 'N'){

	}else if(c[i]=='o' || c[i] == 'O'){
		
	}else if(c[i]=='p' || c[i] == 'P'){
		i++;
		if(c[i]=='y' || c[i] == 'Y'){
			i++;
			if(c[i]=='t' || c[i] == 'T'){
				i++;
				if(c[i]=='h' || c[i] == 'H'){
					i++;
					if(c[i]=='o' || c[i] == 'O'){
						i++;
						if(c[i]=='n' || c[i] == 'N'){
							Python_function();
							check_flag=true;
						}
					}
				}
			}else if(c[i]=='h' || c[i] == 'H'){
				i++;
				if(c[i]=='t' || c[i] == 'T'){
					i++;
					if(c[i]=='o' || c[i] == 'O'){
						i++;
						if(c[i]=='n' || c[i] == 'N'){
							Pyhton_function();
							check_flag=true;
						}
					}
				}
			}
		}
	}else if(c[i]=='q' || c[i] == 'Q'){

	}else if(c[i]=='r' || c[i] == 'R'){

	}else if(c[i]=='s' || c[i] == 'S'){
		i++;
		if(c[i]=='l' || c[i]=='L'){
				Print_sl();
				check_flag=true;
		}
	}else if(c[i]=='t' || c[i] == 'T'){
		
	}else if(c[i]=='u' || c[i] == 'U'){
		
	}else if(c[i]=='v' || c[i] == 'V'){
		i++;
		if(c[i]=='e' || c[i] == 'E'){
			i++;
			if(c[i]=='r' || c[i] == 'E'){
				PrintVer();
				check_flag=true;
			}
		}
	}else if(c[i]=='w' || c[i] == 'W'){
		
	}else if(c[i]=='x' || c[i] == 'X'){
		
	}else if(c[i]=='y' || c[i] == 'Y'){
		
	}else if(c[i]=='z' || c[i] == 'Z'){
		
	}else if(c[i]=='_'){
		
	}else{
		printf("sorry.I can't found your input command...%s",c);
		check_flag=false;
	}
	if(!check_flag){
		printf("sorry.I can't found your input command...%s",c);
		check_flag=false;
	}
	
}



void Clear_Console(){
	system("cls");
}

void Comand_Prompt_windows(){
	system("cls");
	system("mode 1000,150");
}

//function name start [d] or [D]

//function name start [e] or [E]

//function name start [f] or [F]

//function name start [g] or [G]

//function name start [h] or [H]
void Hello(){
	printf("Hello!!\n");
}

//function name start [h] or [H]
//function name start [i] or [I]
//function name start [j] or [J]
//function name start [k] or [K]
//function name start [l] or [L]
//function name start [m] or [M]
//function name start [n] or [N]
//function name start [o] or [O]


//function name start [p] or [P]

void Pyhton_Exit(){
	printf("\nThanks for using Pyhton!!\nBut I think you want to use Python.");
	printf("If you want to Python, please go to website for [www.python.org].\n");
	printf("Have a nice day!!\n");
	exit(0);
}

void Print_Help(){
	printf("<----------Command---------->\n");
	printf("Add: Add two numbers\n");
	printf("Exit: Finish pyhton\n");
	printf("Help: Show help\n");
	printf("Python: \n");
	printf("Ver: Show Pyhton version");
	printf("and more commands...\n");
}
void Pyhton_function(){
	printf("This is not Python.This is Pyhton\n");
}

void Python_function(){
	printf("This is Pyhton.\n If you want to get Python, go to [www.python.org].\n");
	system("start www.python.org");
	exit(0);
}
void Pyhotn_Version(){
	printf("Pyhton :%s",Ver);
}

void Print_sl(){
	int i=0,j=0,k=0,count=0;
	int dx=0;
	int dx_count=0;
	char sl_body[SL_PATTERNS][SL_HEIGHT][SL_LENGTH]={
				{SL1, SL2, SL3, SL4, SL5, SL6, SL7, SLWHL11, SLWHL12, SLWHL13, SLWHL14},
				{SL1, SL2, SL3, SL4, SL5, SL6, SL7, SLWHL21, SLWHL22, SLWHL23, SLWHL24},
				{SL1, SL2, SL3, SL4, SL5, SL6, SL7, SLWHL31, SLWHL32, SLWHL33, SLWHL34},
				{SL1, SL2, SL3, SL4, SL5, SL6, SL7, SLWHL41, SLWHL42, SLWHL43, SLWHL44},
				{SL1, SL2, SL3, SL4, SL5, SL6, SL7, SLWHL51, SLWHL52, SLWHL53, SLWHL54},
				{SL1, SL2, SL3, SL4, SL5, SL6, SL7, SLWHL61, SLWHL62, SLWHL63, SLWHL64},
		};

	char tender_body[SL_PATTERNS][SL_HEIGHT][SL_LENGTH]={
				{TENDER01,TENDER02,TENDER03,TENDER04,TENDER05,TENDER06,TENDER07,TENDER08,TENDER09,TENDER10,TENDER11},
				{TENDER01,TENDER02,TENDER03,TENDER04,TENDER05,TENDER06,TENDER07,TENDER08,TENDER09,TENDER10,TENDER11},
				{TENDER01,TENDER02,TENDER03,TENDER04,TENDER05,TENDER06,TENDER07,TENDER08,TENDER09,TENDER10,TENDER11},
				{TENDER01,TENDER02,TENDER03,TENDER04,TENDER05,TENDER06,TENDER07,TENDER08,TENDER09,TENDER10,TENDER11},
				{TENDER01,TENDER02,TENDER03,TENDER04,TENDER05,TENDER06,TENDER07,TENDER08,TENDER09,TENDER10,TENDER11},
				{TENDER01,TENDER02,TENDER03,TENDER04,TENDER05,TENDER06,TENDER07,TENDER08,TENDER09,TENDER10,TENDER11},
			};

	//char *wheel[2]={SLWHL11,SLWHL12};
	system("mode 300");
	while(count<15){
		for(i=0;i<SL_PATTERNS;i++){
			system("cls");
			for(j=0;j<SL_HEIGHT;j++){
				dx=100-dx_count;
				while(dx>0){
					_cprintf(" ");
					dx--;
				}
				_cprintf("%s%s\n",sl_body[i][j],tender_body[i][j]);
			}
			sleep(0.1);
			dx_count++;
		}
		count++;
	}
	system("cls | mode 80,30");
	
}
void Pyhton_Starting(void){
	printf("This is Pyhton %s. Not Python\n",Ver);
	printf("This is Joke Program System that made by JunkProgramShelf on operate WindowsOS.\n");
	printf("This program has little function and commands because thie is just Joke.\nBasic Syntax\nFUNCTION OR COMMAND\n");
}

void PrintVer(){
	printf("Pyhton version:::::%s\n",Ver);
}

//function name start [q] or [Q]
//function name start [r] or [R]
//function name start [s] or [S]
//function name start [t] or [T]
//function name start [u] or [U]
