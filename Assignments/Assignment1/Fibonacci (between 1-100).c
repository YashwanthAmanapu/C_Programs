#include <stdio.h>
int main(){
    int n1=0, n2=1, n3, i, n;
    printf("Enter the end point -> ");
    scanf("%d", &n);
    printf("%d %d ", n1, n2);
    for (i=2;i<n;i++){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        if (n3>n){
            break;
        }
        printf("%d ",n3);
    }
}
