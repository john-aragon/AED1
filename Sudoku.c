#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool sudoukuounao(int tabela[9][9]){

    bool checalinha[9][9]={false};
    bool checacoluna[9][9]={false};
    bool checacaixa [9][9]={false};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int temp = tabela[i][j];
            if (temp<1 || temp>9)
            {
                return false;
            }
            
            int caixa = (i/3)*3+(j/3);

            if (checalinha[i][temp-1] || checacoluna[j][temp-1] || checacaixa[caixa][temp-1])
            {
                return false;
            }
            
            checalinha[i][temp-1] = true;
            checacoluna[j][temp-1] = true;
            checacaixa[caixa][temp-1] = true; 
        }
        
    }
    return true;
}

int main(){
   
    int n;
    scanf("%d", &n);     
    int r[n];
        
    for (int h = 0; h < n; h++)
    {
        int tabela[9][9];
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                scanf("%d", &tabela[i][j]);
            }     
        }  
        r[h]=sudoukuounao(tabela);
    }
    
    for (int i = 0; i < n; i++)
    {
          printf("Instancia %d\n", i+1);

            if (r[i])
            {
                printf("SIM\n");
            }else
            {
                printf("NAO\n");
            }
            printf("\n");
    }
    
    return 0;
}