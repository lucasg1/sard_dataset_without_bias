void FUN0()
{
    wchar_t data;
    if(GLOBAL_CONST_TRUE)
    {
        data = L'W';
    }
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        data = L'W';
    }
    if(GLOBAL_CONST_TRUE)
    {
        printf("%02lx\n", data);
    }
}
void FUN2()
{
    wchar_t data;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L'W';
        printf("%02lx\n", data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        data = L'Z';
        printf("%02lx\n", data);
    }
}
void FUN3()
{
    wchar_t data;
    if(GLOBAL_CONST_TRUE)
    {
        data = L'W';
        printf("%02lx\n", data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        data = L'Z';
        printf("%02lx\n", data);
    }
}
