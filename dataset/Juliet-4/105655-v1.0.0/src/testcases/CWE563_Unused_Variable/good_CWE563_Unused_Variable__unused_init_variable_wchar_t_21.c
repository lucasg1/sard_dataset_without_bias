static int VAR0 = 0;
static int VAR1 = 0;
void FUN0(wchar_t data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printWcharLine(data);
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
        printWcharLine(data);
    }
}
void FUN3()
{
    wchar_t data;
    data = L'W';
    VAR1 = 1; 
    FUN2(data);
}
