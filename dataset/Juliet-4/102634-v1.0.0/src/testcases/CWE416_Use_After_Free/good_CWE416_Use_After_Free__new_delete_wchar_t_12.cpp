namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    else
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(globalReturnsTrueOrFalse())
    {
        ; 
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new wchar_t;
        *data = L'A';
    }
    else
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(globalReturnsTrueOrFalse())
    {
        printWcharLine(*data);
    }
    else
    {
        printWcharLine(*data);
    }
}
} 
