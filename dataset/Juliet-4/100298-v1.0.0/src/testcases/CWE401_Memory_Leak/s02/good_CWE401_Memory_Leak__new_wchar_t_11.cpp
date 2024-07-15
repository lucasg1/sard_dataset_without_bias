namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new wchar_t;
        *data = L'A';
        printHexCharLine((char)*data);
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete data;
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new wchar_t;
        *data = L'A';
        printHexCharLine((char)*data);
    }
    if(globalReturnsTrue())
    {
        delete data;
    }
}
void FUN2()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        wchar_t VAR1;
        data = &VAR1;
        *data = L'A';
        printHexCharLine((char)*data);
    }
    if(globalReturnsTrue())
    {
        ; 
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        wchar_t VAR1;
        data = &VAR1;
        *data = L'A';
        printHexCharLine((char)*data);
    }
    if(globalReturnsTrue())
    {
        ; 
    }
}
} 
