#include <stdio.h>
#include <math.h>

// 哥德巴赫猜想
int prime( int p );
void Goldbach( int n );

int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}

int prime(int p){
    int isPrime=1;
    if(p<2){
        isPrime=0;
    }
    for(int i=2;i<p-1;i++){
        if(p%i==0){
            isPrime=0;
            break;
        }
    }
    return isPrime;
}

void Goldbach(int n){
    int p=2;    //起始的最小素数
    int q=n-p;
    if(prime(q)){
        printf("%d=%d+%d",n=p+q);
    }else{
        while (1)
        {
            p++;
            if(prime(p)){
                q=n-p;
                if(prime(q)){
                    printf("%d=%d+%d",n,p,q);
                    break;
                }
            }
        }
    }
}