void FUN0()
{
    wchar_t data;
    ; 
    if(globalFalse)
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
    if(globalTrue)
    {
        data = L'W';
        printWcharLine(data);
    }
}
