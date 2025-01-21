#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][2];
    int p = 0, t = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<2; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0; i<n; i++){
        if(a[i][0]>a[i][1]) t++;
        else if(a[i][0]<a[i][1]) p++;
        else{
            t++;
            p++;
        }
    }
    if(t>p){
        printf("Tiger\n");
    }else if(p>t){
        printf("Pathan\n");
    }else{
        printf("Draw\n");
    }

    return 0;
}