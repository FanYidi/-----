/*PAT_B1036_���°���һ����: ��Ļ�ϻ�һ��������*/

#include<cstdio>

int main(){
    int length, word;
    scanf("%d %c", &length, &word);
    int hight = length%2==0 ? length/2 : length/2+1;
    int h = hight, i;
    while(h--){
        //printf("h�ǣ�%d\n", h);
        if(h == 0 or h == hight-1) {
            for(i = 0; i < length; i++) printf("%c", word);
            printf("\n");
        }
        else {
            printf("%c", word);
            for(i = 0; i < length-2; i++) printf(" ");
            printf("%c\n", word);
        }
    }
    return 0;
}
