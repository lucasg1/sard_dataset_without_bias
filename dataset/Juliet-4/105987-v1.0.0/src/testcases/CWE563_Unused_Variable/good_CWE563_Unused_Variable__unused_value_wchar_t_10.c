void FUN0()
{
    wchar_t data;
    if(globalTrue)
    {
        data = L'W';
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        data = L'W';
    }
    if(globalTrue)
    {
        printf("%02lx\n", data);
    }
}
void FUN2()
{
    wchar_t data;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L'W';
        printf("%02lx\n", data);
    }
    if(globalTrue)
    {
        data = L'Z';
        printf("%02lx\n", data);
    }
}
void FUN3()
{
    wchar_t data;
    if(globalTrue)
    {
        data = L'W';
        printf("%02lx\n", data);
    }
    if(globalTrue)
    {
        data = L'Z';
        printf("%02lx\n", data);
    }
}
