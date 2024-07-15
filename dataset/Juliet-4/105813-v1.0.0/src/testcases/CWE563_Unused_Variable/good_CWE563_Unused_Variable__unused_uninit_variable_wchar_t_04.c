static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    wchar_t data;
    ; 
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
    {
        data = L'W';
        printWcharLine(data);
    }
}
