#include<stdio.h>
#include<math.h>
int main(){
    // double a;
    // scanf("%lf",&a);
    // //double ans = ceil(a);
    // //double ans = floor(a);
    // double ans  = round(a);
    // printf("%lf\n",ans);

    // double b;
    // scanf("%lf",&b);
    // double ans = sqrt(b);
    // printf("%lf\n",ans);

    int a, b;
    scanf("%d%d",&a,&b);
    int ans = pow(a,b);
    printf("%d\n",ans);
    return 0;
}