namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new wchar_t;
        *data = L'A';
        printHexCharLine((char)*data);
    }
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        data = new wchar_t;
        *data = L'A';
        printHexCharLine((char)*data);
    }
    if(globalFive==5)
    {
        delete data;
    }
}
void FUN2()
{
    wchar_t * data;
    data = NULL;
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        ; 
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(globalFive==5)
    {
        wchar_t VAR1;
        data = &VAR1;
        *data = L'A';
        printHexCharLine((char)*data);
    }
    if(globalFive==5)
    {
        ; 
    }
}
} 
