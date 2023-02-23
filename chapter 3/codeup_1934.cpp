/*codeup_1934_找x: 输入n范围1~200，输入n个不同数，输出x在数组的下标*/
#include <cstdio>

int main(){
    const int maxn = 200;
    int n, x;
    int lis[maxn];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &lis[i]);
    }
    scanf("%d", &x);
    bool flag = 0;
    for(int j; j < n; j++){
        if(x == lis[j]) {
            flag = 1;
            printf("%d", j);
            break;
        }
    }
    if(!flag) printf("%d", -1);
    return 0;
}
