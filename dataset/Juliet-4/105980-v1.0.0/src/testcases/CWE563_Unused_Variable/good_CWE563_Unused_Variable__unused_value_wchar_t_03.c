void FUN0()
{
    wchar_t data;
    if(5==5)
    {
        data = L'W';
    }
    if(5!=5)
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
    if(5==5)
    {
        data = L'W';
    }
    if(5==5)
    {
        printf("%02lx\n", data);
    }
}
void FUN2()
{
    wchar_t data;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L'W';
        printf("%02lx\n", data);
    }
    if(5==5)
    {
        data = L'Z';
        printf("%02lx\n", data);
    }
}
void FUN3()
{
    wchar_t data;
    if(5==5)
    {
        data = L'W';
        printf("%02lx\n", data);
    }
    if(5==5)
    {
        data = L'Z';
        printf("%02lx\n", data);
    }
}
