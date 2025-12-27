//📌 C String Append Demo

#include<stdio.h>
#include<string.h> 
int main(){
          char firststr[100]="the ";
          char secstr[] ="why"; 
          strcat(firststr,secstr);
          puts(firststr);
          return 0;
}