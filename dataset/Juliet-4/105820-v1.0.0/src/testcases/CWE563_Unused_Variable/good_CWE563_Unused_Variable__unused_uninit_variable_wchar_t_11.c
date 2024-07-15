void FUN0()
{
    wchar_t data;
    ; 
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        data = L'W';
        printWcharLine(data);
    }
}
