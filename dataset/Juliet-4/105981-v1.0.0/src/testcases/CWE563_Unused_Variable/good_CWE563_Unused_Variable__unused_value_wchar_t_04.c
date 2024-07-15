static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    wchar_t data;
    if(STATIC_CONST_TRUE)
    {
        data = L'W';
    }
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
    {
        data = L'W';
    }
    if(STATIC_CONST_TRUE)
    {
        printf("%02lx\n", data);
    }
}
void FUN2()
{
    wchar_t data;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L'W';
        printf("%02lx\n", data);
    }
    if(STATIC_CONST_TRUE)
    {
        data = L'Z';
        printf("%02lx\n", data);
    }
}
void FUN3()
{
    wchar_t data;
    if(STATIC_CONST_TRUE)
    {
        data = L'W';
        printf("%02lx\n", data);
    }
    if(STATIC_CONST_TRUE)
    {
        data = L'Z';
        printf("%02lx\n", data);
    }
}
