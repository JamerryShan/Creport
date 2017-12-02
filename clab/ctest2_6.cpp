#include <stdio.h>
enum{normal,spaceone,spacemore};
int main()
{
    char c;
    int state = normal;
    while((c=getchar())&&(c!=EOF))
        switch (state)
        {
            case normal:
                {
                    if (c!=' ') {putchar(c);break;}
                    else state=spaceone;
                }
            case spaceone:
                {
                    state=spacemore;
                    break;
                }
            case spacemore:
                {
                    if(c==' ') break;
                    else
                        {
                            printf(" ");
                            putchar(c);
                            state=normal;
                            break;
                        }
                }
        }
    return 0;
}
