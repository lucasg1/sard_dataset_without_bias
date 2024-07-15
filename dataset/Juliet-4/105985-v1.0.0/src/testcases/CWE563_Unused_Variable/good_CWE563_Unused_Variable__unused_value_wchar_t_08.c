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
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printf("%02lx\n", data);
    }
}
void FUN3()
{
    wchar_t data;
    if(FUN0())
    {
        data = L'W';
    }
    if(FUN0())
    {
        printf("%02lx\n", data);
    }
}
void FUN4()
{
    wchar_t data;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L'W';
        printf("%02lx\n", data);
    }
    if(FUN0())
    {
        data = L'Z';
        printf("%02lx\n", data);
    }
}
void FUN5()
{
    wchar_t data;
    if(FUN0())
    {
        data = L'W';
        printf("%02lx\n", data);
    }
    if(FUN0())
    {
        data = L'Z';
        printf("%02lx\n", data);
    }
}
