namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new wchar_t[100];
        delete [] data;
    }
    else
    {
        data = new wchar_t[100];
        delete [] data;
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
        data = new wchar_t[100];
    }
    else
    {
        data = new wchar_t[100];
    }
    if(globalReturnsTrueOrFalse())
    {
        delete [] data;
    }
    else
    {
        delete [] data;
    }
}
} 
