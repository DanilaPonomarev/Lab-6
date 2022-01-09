#include <stdio.h>
int main()
{
    int i,x[3],y[3];
    for(i=0;i!=3;i++)
       {
        printf("Введите x[%d]\n",i);
        scanf("%d",&x[i]);
        printf("Введите y[%d]\n",i);
        scanf("%d",&y[i]);
    }
    printf("Введите дополнительное (лишнее x ) x[3]\n");
    scanf("%d",&x[3]);
    printf("Введите дополнительное (лишнее x ) y[3]\n");
    scanf("%d",&y[3])
    return 0;
}
