/* PAT_B1001 3N+1����*/

#include <cstdio>

int main(){
    int n, step = 0;
    printf("������������n:");
    scanf("%d", &n);
    while(n != 1){
        if(n%2 == 0) n /= 2;
        else n = (n*3 + 1)/2;
        step += 1;
    }
    printf("������Ҫ %d ������Ϊ1��",step);
    return 0;
}
