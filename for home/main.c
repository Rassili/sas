#include <stdio.h>
#include <stdbool.h>

int main(){
    /*int n,i=0,j,s=0,k=0;
    printf("put number :");
    scanf("%d",&n);//n=5
    s=n;
    while(i<n){
            j=0;
            s=s-1;
            while(k<s){
                printf(" ");
                k++;
            }
            while(j<=i)
            {
               printf("*");
               j++;
            }
            printf("\n");
        i++;
    }*/
int tab [5][2]={
{1,2,12,12,1},
 {1,2,3,4,5}
};

for (int i=0;i<2;i++){
    for(int j=0;j<5;j++){
        printf("%d ",tab[i][j]);
    }
    printf("\n");
}

    return 0;
}
