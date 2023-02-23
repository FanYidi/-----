/* PAT_B1001 3N+1猜想*/

#include <cstdio>

int main(){
    int n, step = 0;
    printf("请输入正整数n:");
    scanf("%d", &n);
    while(n != 1){
        if(n%2 == 0) n /= 2;
        else n = (n*3 + 1)/2;
        step += 1;
    }
    printf("最终需要 %d 步来变为1。",step);
    return 0;
}
