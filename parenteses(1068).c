#include <stdio.h>
#include <string.h>

int verificai(char linha[]){
    int p1=0, p2=0;
    for (int i = 0; i < strlen(linha); i++)
    {
        if (linha[i]=='('){
            p1++;
        }
        else if (linha[i]==')') {
            p2++;
        }
        if ((p1-p2)<0) {
            return 1;
    }   
}
    return (p1-p2) !=0;
}

int main(){
    int run =1;
    while(run==1){
        char expressao [1000];

        fgets(expressao, sizeof(expressao), stdin);

        if (verificai(expressao)==0){
            printf("Corrrect\n");
        }
        else{
            printf("Incorrect\n");
        }
    }
    return 0;
}