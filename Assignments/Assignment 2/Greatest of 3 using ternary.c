#include <stdio.h>
int main(){
    int n1, n2, n3;
    printf("Enter three numbers to compare : "); scanf("%d %d %d",&n1,&n2,&n3);
    int res = (n1>n2) ? ((n1>n3) ? n1 : n3) : ((n2>n3) ? n2 : n3);
    printf("Greatest of the three inputs is %d", res);
    return 0;
}
