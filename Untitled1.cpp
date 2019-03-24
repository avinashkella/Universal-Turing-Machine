#include<iostream>
#include<string>
#include<conio.h>
#include<string.h>
#include<fstream>

using namespace std;

int main(){
char tape[250];
char dest[250];
ifstream fi;
int j=0,count=0;
int i=0;
fi.open("input.txt");

	while(!fi.eof()){
		fi>>dest[i];
	
		if(dest[i]=='(' || dest[i]==')' || dest[i]=='>' || dest[i]=='q')
		i--;
		else {
			tape[i]=dest[i];
			count++;
		}
		if(tape[i]=='0')
		{
		tape[i]='1';
	}
		if(tape[i]=='1'){
		tape[i]='1';
		i++;
		count++;
		tape[i]='1';
	}
			
		if(tape[i]=='2'){
		tape[i]='1';
		i++;
		count++;
		tape[i]='1';
		i++;
		count++;
		tape[i]='1';
	}
	
		if(tape[i]=='3'){
		tape[i]='1';
		i++;
		count++;
		tape[i]='1';
		i++;
		count++;
		tape[i]='1';
		i++;
		count++;
		tape[i]='1';
	}
	
		if(tape[i]=='4'){
		tape[i]='1';
		i++;
		count++;
		tape[i]='1';
		i++;
		count++;
		tape[i]='1';
		i++;
		count++;
		tape[i]='1';
		i++;
		count++;
		tape[i]='1';
	}
	if(tape[i]==',' || tape[i]=='-')
	tape[i]='0';
	if(tape[i]=='R')
	tape[i]='0';
	if(tape[i]=='L')
	tape[i]='1';
	i++;
	}
	for(i=0;i<count;i++)
	printf("%d",tape[i]);
}
