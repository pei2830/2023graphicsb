#include <stdio.h>
int main()
{
    int a[10]
    char line[20];
    ///scanf("%s",line);
    FILE* fin = fopen("file.txt", "r");
    fscanf(fin, "%s", line);
    printf("讀到了:%s\n",line);///馬上印
    fscanf(fin, "%s", line);
    printf("讀到了:%s\n",line);///馬上印
}
