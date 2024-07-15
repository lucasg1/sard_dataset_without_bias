static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    wchar_t data;
    data = L'W';
    if(staticFalse)
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
    if(staticTrue)
    {
        printWcharLine(data);
    }
}
