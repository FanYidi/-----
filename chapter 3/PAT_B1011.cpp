/*PAT_B1011_A+BandC: [-2^31 -- 2^31]������ABC���ж�A+B�Ƿ����C*/

#include <cstdio>

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        long long sumab = a + b;
        if(sumab > c) printf("Case #%d: true", i+1);
        else printf("Case #%d: false", i+1);
    }
    return 0;
}
