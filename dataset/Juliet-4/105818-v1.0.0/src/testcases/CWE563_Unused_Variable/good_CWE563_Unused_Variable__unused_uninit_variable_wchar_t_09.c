void FUN0()
{
    wchar_t data;
    ; 
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        data = L'W';
        printWcharLine(data);
    }
}
