void FUN0()
{
    wchar_t data;
    if(globalReturnsTrue())
    {
        data = L'W';
    }
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        data = L'W';
    }
    if(globalReturnsTrue())
    {
        printf("%02lx\n", data);
    }
}
void FUN2()
{
    wchar_t data;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L'W';
        printf("%02lx\n", data);
    }
    if(globalReturnsTrue())
    {
        data = L'Z';
        printf("%02lx\n", data);
    }
}
void FUN3()
{
    wchar_t data;
    if(globalReturnsTrue())
    {
        data = L'W';
        printf("%02lx\n", data);
    }
    if(globalReturnsTrue())
    {
        data = L'Z';
        printf("%02lx\n", data);
    }
}
