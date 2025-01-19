#include<stdio.h>
int count_vowel(char * s,int i){
    if(i=='\0') return 0;
    int ans = count_vowel(s,i+1);
    if(s[i]>='A' && s[i]<='Z'){
        s[i] = s[i] + 32;
    }
    if(s[i]=='a' || s[i] =='e' || s[i]=='o' || s[i] =='u' || s[i]=='i'){
        return ans+1;
    }else{
        return ans;
    }
}
int main(){
    char s[206];
    fgets(s,206,stdin);
    int count = count_vowel(s,0);
    printf("%d\n",count);
    return 0;
}