#include<stdio.h>

char*s="#include<stdio.h>%c%cchar*s=%c%s%c;%c%cint main()%c{%c    printf(s,10,10,34,s,34,10,10,10,10,10,10);%c}%c";

int main()
{
    printf(s,10,10,34,s,34,10,10,10,10,10,10);
}
