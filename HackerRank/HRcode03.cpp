https://docs.google.com/document/d/1CDOxgHfIU0Pe4nPs9uavrGlM2Np_In9L/edit?usp=sharing&ouid=105316849155610714393&rtpof=true&sd=true


#include <stdio.h>

void update(int *a,int *b) {
    int sum=*a+*b;
    int diff;
    if (*a>=*b){
        diff=*a-*b;
    }
    else{
        diff=*b-*a;
    }
    *a=sum;
    *b=diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}