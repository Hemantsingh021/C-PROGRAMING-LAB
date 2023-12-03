#include <stdio.h>

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    int t1=0, t2=0, ans=1;
    
    for (int i=1; i <= num; i++){
        printf("%d\t", t2);

        t1 = t2;
        t2 = ans;
        ans = t1+t2;
    }
    return 0;
}