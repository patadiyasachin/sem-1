#include<stdio.h>
int n,i,j;

void printA();
void printB();
void printC();
void printD();
void printE();
void printF();
void printG();
void printH();
void printI();
void printJ();
void printK();
void printL();
void printM();
void printN();
void printO();
void printP();
void printQ();
void printR();
void printS();
void printT();
void printU();
void printV();
void printW();
void printX();
void printY();
void printZ();

int main()
{
	
	char choise;
	printf("Enter S for name of height is small. \nEnter L for name of height is large. \n");
	scanf("%c", &choise);
	switch (choise)
	{
		case 'S': n=5; break;
		case 's': n=5; break;
		case 'L': n=7; break;
		case 'l': n=7; break;
		default : n=5; printf("You don't enter a valid choise therefore name of your height is small: ");
	}
	
	char name[100];
	printf("\nEnter your name: \n");
	scanf("%s", &name);
	
	int counter;
	for(counter=0; name[counter]!='\0'; counter++)
	{
		if(name[counter]=='A' || name[counter]=='a')
		{
			printA();	
		}
		else if(name[counter]=='B' || name[counter]=='b')
		{
			printB();	
		}
		else if(name[counter]=='C' || name[counter]=='c')
		{
			printC();	
		}	
		else if(name[counter]=='D' || name[counter]=='d')
		{
			printD();	
		}	
		else if(name[counter]=='E' || name[counter]=='e')
		{
			printE();	
		}
		else if(name[counter]=='F' || name[counter]=='f')
		{
			printF();	
		}		
		else if(name[counter]=='G' || name[counter]=='g')
		{
			printG();	
		}		
		else if(name[counter]=='H' || name[counter]=='h')
		{
			printH();	
		}		
		else if(name[counter]=='I' || name[counter]=='i')
		{
			printI();	
		}		
		else if(name[counter]=='J' || name[counter]=='j')
		{
			printJ();	
		}		
		else if(name[counter]=='K' || name[counter]=='k')
		{
			printK();	
		}		
		else if(name[counter]=='L' || name[counter]=='l')
		{
			printL();	
		}		
		else if(name[counter]=='M' || name[counter]=='m')
		{
			printM();	
		}		
		else if(name[counter]=='N' || name[counter]=='n')
		{
			printN();	
		}		
		else if(name[counter]=='O' || name[counter]=='o')
		{
			printO();	
		}		
		else if(name[counter]=='P' || name[counter]=='p')
		{
			printP();	
		}		
		else if(name[counter]=='Q' || name[counter]=='q')
		{
			printQ();	
		}		
		else if(name[counter]=='R' || name[counter]=='r')
		{
			printR();	
		}		
		else if(name[counter]=='S' || name[counter]=='s')
		{
			printS();	
		}		
		else if(name[counter]=='T' || name[counter]=='t')
		{
			printT();	
		}		
		else if(name[counter]=='U' || name[counter]=='u')
		{
			printU();	
		}		
		else if(name[counter]=='V' || name[counter]=='v')
		{
			printV();	
		}		
		else if(name[counter]=='W' || name[counter]=='w')
		{
			printW();	
		}		
		else if(name[counter]=='X' || name[counter]=='x')
		{
			printX();	
		}		
		else if(name[counter]=='Y' || name[counter]=='y')
		{
			printY();	
		}
		else if(name[counter]=='Z' || name[counter]=='z')
		{
			printZ();	
		}	
		else{
			break;
		}		
			
	}
	return 0;
}

void printA()
{
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=(2*n)-1; j++)
		{
			if(j==n-i+1 || j==n+i-1 || (i==(n/2)+1 && j>i && j<=2*i+1))
			{
				printf("*");		
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printB()
{
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(j==1 || j==(n/2)+1 || i==1 && j<(n/2)+1 || i==n && j<(n/2)+1 || i==(n/2)+1 && j<(n/2)+1)
			{
				if(i==j && i!=1 || j==(n/2)+1 && (i==1 || i==n))
				{
					printf(" ");
				}
				else{
					printf("* ");		
				}
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n\n");
}
void printC()
{
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=(n/2)+2; j++)
		{
			if(j==1 || i==1 || i==n)
			{
				if(j==1 && i==1 || j==1 && i==n)
				{
					printf(" ");
				}
				else
				{
					printf("*");		
				}
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printD()
{
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j==1 || j==n || i==1 || i==n ){
				if((i==1 || i==n) && j==n)
				{
					printf(" ");
				}
				else
				{
					printf("*");		
				}
			}
			else{
				printf(" ");	
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printE()
{
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(j==1 || i==1 || i==n || i==(n/2)+1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printF()
{
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(j==1 || i==1 || i==(n/2)+1)
			{
				if(j==n && i==(n/2)+1)
				{
					printf(" ");
				}
				else
				{
					printf("*");		
				}
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printG(){
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(i==1 || i==n || j==1 || j==n && i>=(n/2)+1 || i==(n/2)+1 && j>(n/2)+1) 
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printH()
{
	for(i=1; i<=n; i++){
		for(j=1; j<=n ; j++){
			if(j==1 || j==n || i==(n/2)+1){
				printf("*");
			}
			
			else{
				printf(" ");	
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printI()
{
	for(i=1; i<=n; i++){
		for(j=1; j<=n ; j++){
			if(i==1 || i==n || j==(n/2)+1)
			{
				printf("*");
			}
			else{
				printf(" ");	
			}
		}
		printf("\n");
	}
	printf("\n\n");

}

void printJ()
{
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(i==1 || j==(n/2)+1 || i==n && j<(n/2)+1 || i==n-1 && j==1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printK()
{
	for(i=1; i<=n; i++){
		for(j=1; j<=n ; j++){
			if(j==1 || (j>n-5 && (j==n-i || j==i-1))){
				printf("*");
			}
			else{
				printf(" ");	
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printL()
{
	for(i=1; i<=n; i++){
		for(j=1; j<=n ; j++){
			if(j==1||i==n){
				printf("*");
			}
			else{
				printf(" ");	
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printM()
{
	for(i=1; i<=n; i++){
		for(j=1; j<=n ; j++){
			if(j==1 || j==n || ((i==j || j==n-i+1) && i<=(n/2)+1)){
				printf("*");
			}
			
			else{
				printf(" ");	
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printN()
{
	for(i=1; i<=n; i++){
		for(j=1; j<=n ; j++){
			if(j==1 || j==n || i==j){
				printf("*");
			}
			else{
				printf(" ");	
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printO()
{
	for(i=1; i<=n; i++){
		for(j=1; j<=n ; j++){
			if(i==1 || i==n || j==1 || j==n){
				if(i==j || j==n+1-i)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
			else{
				printf(" ");	
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printP()
{
	for(i=1; i<=n; i++){
		for(j=1; j<=n ; j++){
			if(j==1 || i==1 ||j==n && i<=(n/2)+1 || i==(n/2)+1){
				printf("*");
			}
			
			else{
				printf(" ");	
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printQ()
{
	for(i=1; i<=n+2; i++){
		for(j=1; j<=n+2 ; j++){
			if(i==1 || i==n || j==1 || j==n || (i==j && i>(n/2)+1)){
				
				if((i>n || j>n) && i!=j || j==n-i+1 || (j==1 && i==1))
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
			else{
				printf(" ");	
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printR()
{
	for(i=1; i<=n+1; i++){
		for(j=1; j<=n ; j++){
			if(j==1 || i==1 ||j==n && i<=(n/2)+1 || i==(n/2)+1 || i>=n/2+1 && j==i-1){
				printf("*");
			}
			
			else{
				printf(" ");	
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printS()
{
	for(i=1; i<=n; i++){
		for(j=1; j<=n ; j++){
			if(i==1 || i==n || (j==1 && i<=(n/2+1)) || (j==n && i>=(n/2+1)) || i==(n/2)+1)
			{
				if(i==j && i!=(n/2)+1 || (j==n || j==1) && i==n/2+1)
				{
					printf(" ");
				}
				else
				{
					printf("*");		
				}
			}
			else
			{
				printf(" ");	
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printT()
{
	for(i=1; i<=n; i++){
		for(j=1; j<=n ; j++){
			if(i==1 || j==n/2+1){
				printf("*");
			}
			
			else{
				printf(" ");	
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printU()
{
	for(i=1; i<=n; i++){
		for(j=1; j<=n ; j++){
			if(j==1 || j==n || i==n){
				if(i==j || j==n-i+1)
				{
					printf(" ");
				}
				else
				{
					printf("*");		
				}
			}
			else{
				printf(" ");	
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printV()
{
	for(i=1; i<=n; i++){
		for(j=1; j<=n*2-1 ; j++){
			if(i==j || j==(2*n)-i){
				printf("*");
			}
			
			else{
				printf(" ");	
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printW()
{
	for(i=1; i<=n; i++){
		for(j=1; j<=n ; j++){
			if(j==1 || j==n || (i>=n/2+1 && (i==j || j==n-i+1))){
				printf("*");
			}
			else{
				printf(" ");	
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printX()
{
	for(i=1; i<=n; i++){
		for(j=1; j<=n ; j++){
			if(i==j || j==n-i+1){
				printf("*");
			}
			
			else{
				printf(" ");	
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printY()
{
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if((j==(n/2)+1 && i>(n/2)+1) || (j==i && j<(n/2)+1) || (j==n-i+1 && j>=(n/2)+1))
			{
				printf("*");
			}
			else 
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void printZ()
{
	for(i=1; i<=n; i++){
		for(j=1; j<=n ; j++){
			if(i==1 || i==n || j==n-i+1){
				printf("*");
			}
			
			else{
				printf(" ");	
			}
		}
		printf("\n");
	}
	printf("\n\n");
}
