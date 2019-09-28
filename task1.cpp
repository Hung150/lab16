#include <stdio.h>
int main(void)
{
    int a[10], b[10], c[10];
    int n;
    printf("N: ");
    scanf("%i",&n);
 
    int i;
    for (i=0; i<n; ++i){
        printf("a[%i] : ",i+1);
        scanf("%i",&a[i]);
    }
 
    int k=0;
    b[k]=1;
    c[k]=a[k];
    for (i=1;i<n;++i){
        if (a[i-1]==a[i]) ++b[k];
        else{
            ++k;
            b[k]=1;
            c[k]=a[i];
        }
    }
    for (i=0; i<=k;++i) printf("  %i>%i:%i\n",i+1,b[i],c[i]);
    return 0;
}
 



