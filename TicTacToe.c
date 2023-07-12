#include <stdio.h>
#include<stdlib.h>
char c[10]={'0','1','2','3','4','5','6','7','8','9'};

void dashboard();
void markboard(char mark);
int checkforwin();
int choice,player;



int main () {
    char mark;
    int result;
    player =1;
    
    do{
 dashboard();
        player=(player%2)?1:2;
        printf("player :%d,enter your choice:",player);
        scanf("%d",&choice);
    
    mark=(player==1)?'X':'O';
    markboard(mark);
     result=checkforwin();
         player++;

    }while(result==-1);
    if(result==1){
        printf("==>player %d wins",--player);
    }
    else{
        printf("==>draw match");
    }

return 0;
}
void dashboard(){
    system("clear");
    printf("\n\n\t  tic tac toe \n\n ");
    printf("player 1(x)  -player 2(o)\n\n ");
     printf("      |       |        |\n");
 printf("   %c   |   %c   |   %c    |\n ",c[1],c[2],c[3]);
 printf(" _____|_______|________|\n");
  printf("       |       |        |\n");
 printf("   %c   |   %c   |   %c    |\n ",c[4],c[5],c[6]);
 printf(" _____|_______|________|\n");
  printf("       |       |        |\n");
 printf("   %c   |   %c   |   %c    |\n ",c[7],c[8],c[9]);
 printf(" _____|_______|________|\n");

}
int checkforwin(){
    int returnvalue;
    if(c[1]==c[2] && c[2]==c[3]){
        returnvalue= 1;
    } 
    else if(c[4]==c[5] && c[5]==c[6]){
        returnvalue= 1;
    }
     else if(c[7]==c[8] && c[8]==c[9]){
        returnvalue=1;
    }
     else if(c[1]==c[4] && c[4]==c[7]){
        returnvalue= 1;
    }
    else  if(c[2]==c[5] && c[5]==c[8]){
        returnvalue= 1;
    }
     else if(c[3]==c[6] && c[6]==c[9]){
        returnvalue=1;
    }
     else if(c[1]==c[5] && c[5]==c[9]){
        returnvalue= 1;
    }
     else if(c[3]==c[5] && c[5]==c[7]){
        returnvalue= 1;
        }
        else if(c[1]!='1' && c[2]!='2' && c[3]!='3'&& c[4]!='4'&& c[5]!='5'&& c[6]!='6' && c[7]!='7' && c[8]!='8'&& c[9]!='9'){
            returnvalue=0;
        }
        else {
            returnvalue=-1;
        }
        return returnvalue;
}
void markboard(char mark){
    if(choice==1 && c[1]=='1'){
        c[1]=mark;
    }
     else if(choice==2 && c[2]=='2'){
        c[2]=mark;
    }
     else if(choice==3 && c[3]=='3'){
        c[3]=mark;
    }
     else if(choice==4 && c[4]=='4'){
        c[4]=mark;
    }
     else if(choice==5 && c[5]=='5'){
        c[5]=mark;
    }
     else if(choice==6  && c[6]=='6'){
        c[6]=mark;
    }
     else if(choice==7 && c[7]=='7'){
        c[7]=mark;
    }
     else if(choice==8 && c[8]=='8'){
        c[8]=mark;
    }
     else if(choice==9 && c[9]=='9'){
        c[9]=mark;
    }
    else {
        printf("invalid choice");
    }

}