void FUN0()
{
    wchar_t data;
    data = L'W';
    if(5!=5)
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
    if(5==5)
    {
        printWcharLine(data);
    }
}
