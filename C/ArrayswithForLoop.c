#include <stdio.h>


void Print( char args[] ){
    for(int i=0; i< sizeof(args);i++){
        printf("%c",args[i]);
    }
    
}

int main() {




    int subjectResults [5];
    char name[3][20] = {"English", "Chinese"};

    Print(name[0]);
    
     

    for (int i = 0; i < 3; i++)
    {
        Print(name[i]);
       // printf(":);
        scanf("%d", &subjectResults[i]);
       
    }




}