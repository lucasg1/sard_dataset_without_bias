int VAR0 = 0;
int VAR1 = 0;
void FUN0(wchar_t data);
void FUN1()
{
    wchar_t data;
    ; 
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(wchar_t data);
void FUN3()
{
    wchar_t data;
    ; 
    VAR1 = 1; 
    FUN2(data);
}
extern int VAR0;
extern int VAR1;
void FUN0(wchar_t data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L'W';
        printWcharLine(data);
    }
}
void FUN2(wchar_t data)
{
    if(VAR1)
    {
        data = L'W';
        printWcharLine(data);
    }
}
