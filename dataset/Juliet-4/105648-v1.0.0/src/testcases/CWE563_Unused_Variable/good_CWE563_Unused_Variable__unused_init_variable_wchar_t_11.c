void FUN0()
{
    wchar_t data;
    data = L'W';
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        printWcharLine(data);
    }
}
