#include <windows.h>
#include <stdio.h>
int main()
{///Setting-compiler, Linker 咒語: 需要winmm
    ///絕對路徑Absolute Path
    ///PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\do.wav", NULL, SND_SYNC);
    ///PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\re.wav", NULL, SND_SYNC);
    ///PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\mi.wav", NULL, SND_SYNC);

    PlaySound("do-re-mi/do.wav", NULL, SND_SYNC);
    ///相對路徑 Relative Path


    printf("Hello World\n");
}
