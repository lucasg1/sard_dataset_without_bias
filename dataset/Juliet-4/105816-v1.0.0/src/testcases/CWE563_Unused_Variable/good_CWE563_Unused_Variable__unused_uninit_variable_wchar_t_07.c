static int staticFive = 5;
void FUN0()
{
    wchar_t data;
    ; 
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        data = L'W';
        printWcharLine(data);
    }
}
