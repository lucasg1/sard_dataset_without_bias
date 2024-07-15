static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    wchar_t data;
    data = L'W';
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        printWcharLine(data);
    }
}
