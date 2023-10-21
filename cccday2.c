#include <stdio.h>
#include<string.h>
int main(){

// ---------------------------------------------------strings---------------------------------
// char ch='b';
// char name[10]="SRM";
// char *branch="CSE";
// printf("character=%c",ch);
// printf("\n name=%s",name);
// printf("\n branch=%s",branch);

// int i;
// char name[10]="SRM";
// char *branch="CSE";

// printf("name=%s",name);
// printf("\n branch=%s",branch);
    // int i;
    // char ch='A';
    // printf("%c",ch);
    // printf("\n %d",ch);
    // printf("\n %c",67);

    //we cannot compare two strings directly 
    //    ----------------------------------------------------INTERVIEW POINTS ----------------------------------------------
    /*EVERY STRING is terminated by a null character by default
    header file for string is #include<string.h>
    there is n build in datatype in C
    but we can declaire string as array of character
    array string cannot be 
    */
    // --------------------------build IN FUNCTIONS IN C --------------------------------------------------
    //char str[20]="It is C";
    // printf("\n length=%d",strlen(str));
    // printf("\n lowercase=%s",strlwr(str));
    // printf("\n uppercase =%s",strupr(str));
/*    LIST OF FUNCTION
    strlen(s1)
    strrev(s1)
    strupr(s1)
    strlwr(s1)
    strcat(s1,s2)
    strncat(s1,s2)
    strcpy(s1,s2)
    strncpy(s1,s2,n)
    strcmp(s1,s2)
    strncmp(s1,s2,n)
    strcmpi(s1,s2)                               
    strchr(str,searchchar)                       searches given character in the string 
    strtok(str,char)                             split the string with the character 
    strstr(s1,s2)                                seARCH s2 in s1,if found returns string s1 from s2
*/
    // char str[]="xyz@gmail.com";
    // char ch = '@';
    // char *res;
    // res=strchr(str,ch);
    // printf("Result=%s",res);

    // char str[80]="xyz@gmail.com";
    // char s[2]="@";
    // char *res;

    // res=strstr(str,s);
    // printf("First toaken=%s",res);

    // printf("%s\n",res);
    // res=strtok('\0',s);

    // printf("\n ALL TOKENS ARE");
    // while(res!=NULL){
    //     printf("%s\n",res);
    //     res=strtok('\0',s);

    // char s[80];
    // int i,v=0,c=0;
    // printf("Enter a string :\n");
    // gets(s);
    // for(i=0;s[i] != '\0';i++)
    // {

    // }

// ----------------------------------------------------PALLINDROME STRING ------------------------------------------------------
//code to find Pallindrome string in c ?

int main(){
    string s[20];
    scanf("%s",&s);
    if(s[0]==s[20]){
        for(int i=0;i<10;i++){
            
        }
    }


    

    return 0;
}


