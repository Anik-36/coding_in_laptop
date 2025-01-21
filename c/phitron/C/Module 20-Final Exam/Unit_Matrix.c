#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i = 0; i<n; i++){
        for(int j= 0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int flag = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i==j && a[i][j]!=1){
                flag = 0;
            }else if(i!=j && a[i][j]!=0){
                flag = 0;
            }
        }
    }
    if(flag==0) printf("NO\n");
    else printf("YES\n");
    return 0;
}