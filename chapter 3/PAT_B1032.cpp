/*PAT_B1032 挖掘机技术哪家强*/

#include <cstdio>

int main(){
    const int maxn = 100000;
    int n;
    scanf("%d", &n);
    int lis[maxn] = {0};
    int maxnum=0, maxscore=0;
    for(int i = 0; i < n; i++){
        int num, score;
        scanf("%d %d", &num, &score); //可以不加空格
        lis[num] += score;
        //printf("得到了数组内容：%d %d", num, lis[num]); //测试
        if(maxscore < lis[num]){
            maxscore = lis[num];
            maxnum = num;
        }
    }
    printf("%d %d", maxnum,lis[maxnum]);
    return 0;
}
