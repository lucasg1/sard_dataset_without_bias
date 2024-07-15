void FUN0()
{
    wchar_t data;
    data = L'W';
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        printWcharLine(data);
    }
}
