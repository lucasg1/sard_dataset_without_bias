void FUN0()
{
    wchar_t data;
    data = L'W';
    if(globalFalse)
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
    if(globalTrue)
    {
        printWcharLine(data);
    }
}
