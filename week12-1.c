#include <stdio.h>
int main()
{
    int a[10]
    char line[20];
    ///scanf("%s",line);
    FILE* fin = fopen("file.txt", "r");
    fscanf(fin, "%s", line);
    printf("Ū��F:%s\n",line);///���W�L
    fscanf(fin, "%s", line);
    printf("Ū��F:%s\n",line);///���W�L
}
