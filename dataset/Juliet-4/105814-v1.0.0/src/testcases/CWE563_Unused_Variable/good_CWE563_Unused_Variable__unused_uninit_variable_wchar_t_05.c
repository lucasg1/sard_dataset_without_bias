static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    wchar_t data;
    ; 
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L'W';
        printWcharLine(data);
    }
}
void FUN1()
{
    wchar_t data;
    ; 
    if(staticTrue)
    {
        data = L'W';
        printWcharLine(data);
    }
}
