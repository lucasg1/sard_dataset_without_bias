static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    wchar_t data;
    if(staticTrue)
    {
        data = L'W';
    }
    if(staticFalse)
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
    if(staticTrue)
    {
        data = L'W';
    }
    if(staticTrue)
    {
        printf("%02lx\n", data);
    }
}
void FUN2()
{
    wchar_t data;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L'W';
        printf("%02lx\n", data);
    }
    if(staticTrue)
    {
        data = L'Z';
        printf("%02lx\n", data);
    }
}
void FUN3()
{
    wchar_t data;
    if(staticTrue)
    {
        data = L'W';
        printf("%02lx\n", data);
    }
    if(staticTrue)
    {
        data = L'Z';
        printf("%02lx\n", data);
    }
}
