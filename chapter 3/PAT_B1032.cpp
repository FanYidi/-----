/*PAT_B1032 �ھ�������ļ�ǿ*/

#include <cstdio>

int main(){
    const int maxn = 100000;
    int n;
    scanf("%d", &n);
    int lis[maxn] = {0};
    int maxnum=0, maxscore=0;
    for(int i = 0; i < n; i++){
        int num, score;
        scanf("%d %d", &num, &score); //���Բ��ӿո�
        lis[num] += score;
        //printf("�õ����������ݣ�%d %d", num, lis[num]); //����
        if(maxscore < lis[num]){
            maxscore = lis[num];
            maxnum = num;
        }
    }
    printf("%d %d", maxnum,lis[maxnum]);
    return 0;
}
