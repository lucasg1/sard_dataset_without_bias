static int staticFive = 5;
void FUN0()
{
    wchar_t data;
    if(staticFive==5)
    {
        data = L'W';
    }
    if(staticFive==5)
    {
<START>
        data = L'Z';
<END>
        printf("%02lx\n", data);
    }
}
