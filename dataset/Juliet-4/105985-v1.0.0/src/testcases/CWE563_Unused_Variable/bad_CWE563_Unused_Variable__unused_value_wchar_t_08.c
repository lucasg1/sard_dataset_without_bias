static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    wchar_t data;
    if(FUN0())
    {
        data = L'W';
    }
    if(FUN0())
    {
<START>
        data = L'Z';
<END>
        printf("%02lx\n", data);
    }
}
