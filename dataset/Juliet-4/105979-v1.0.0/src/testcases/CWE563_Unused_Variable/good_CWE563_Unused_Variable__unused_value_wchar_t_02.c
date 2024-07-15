void FUN0()
{
    wchar_t data;
    if(1)
    {
        data = L'W';
    }
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printf("%02lx\n", data);
    }
}
void FUN1()
{
    wchar_t data;
    if(1)
    {
        data = L'W';
    }
    if(1)
    {
        printf("%02lx\n", data);
    }
}
void FUN2()
{
    wchar_t data;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L'W';
        printf("%02lx\n", data);
    }
    if(1)
    {
        data = L'Z';
        printf("%02lx\n", data);
    }
}
void FUN3()
{
    wchar_t data;
    if(1)
    {
        data = L'W';
        printf("%02lx\n", data);
    }
    if(1)
    {
        data = L'Z';
        printf("%02lx\n", data);
    }
}
