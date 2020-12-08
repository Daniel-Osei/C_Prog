/**
* A CLI based student management system in C.
* Filename -> main.c.
* Use [gcc main.c -o app] to compile.
* Use [./app] to execute.
* 
* Program by: Osei K. Daniel
* Programming Language: C
* Start Date: 07.12.2020
* Program Purpose: Student Management
*/

// TODO
/*
 1. Display Prompt
    >> fix display for different screen sizes
    >> work on center alignment
*/

#include <stdio.h>  /* standard I/O library */
#include <string.h> /* string manipulation library */
#include <stdlib.h> /* system manipulation library */

//Align the message
void printMessageCenter(const char* message)
{
    int len =0;
    int pos = 0;
    //calculate how many space need to print
    len = (78 - strlen(message))/2;
    printf("\t\t\t");
    for(pos =0 ; pos < len ; pos++)
    {
        //print space
        printf(" ");
    }
    //print message
    printf("%s",message);
}

//Head message
void headMessage(const char *message)
{
    system("clear");
    printf("\n");
    printf("\t\t\t###########################################################################");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t############   Student Record Management System Project in C   ############");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    printMessageCenter(message);
    printf("\n\t\t\t----------------------------------------------------------------------------");
}

//Display message
void welcomeMessage()
{
    headMessage("Teju");
    printf("\n\n\n\n\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                  WELCOME                  =");
    printf("\n\t\t\t        =                    TO                     =");
    printf("\n\t\t\t        =               Student Record              =");
    printf("\n\t\t\t        =                 MANAGEMENT                =");
    printf("\n\t\t\t        =                   SYSTEM                  =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getc(stdin);
    getc(stdin);
}

int main(int argc, char *argv[]){
  
  welcomeMessage(); // funtion call to display message

  return 0;
}
