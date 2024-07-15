static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(wchar_t data)
{
    if(VAR0)
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
    data = L'W';
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(wchar_t data)
{
    if(VAR1)
    {
        printf("%02lx\n", data);
    }
}
void FUN3()
{
    wchar_t data;
    data = L'W';
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(wchar_t data)
{
    if(VAR2)
    {
        data = L'Z';
        printf("%02lx\n", data);
    }
}
void FUN5()
{
    wchar_t data;
    data = L'W';
    printf("%02lx\n", data);
    VAR2 = 1; 
    FUN4(data);
}
