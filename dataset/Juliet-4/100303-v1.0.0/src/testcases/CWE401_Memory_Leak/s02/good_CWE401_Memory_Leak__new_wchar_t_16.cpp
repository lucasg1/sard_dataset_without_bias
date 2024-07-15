namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        data = new wchar_t;
        *data = L'A';
        printHexCharLine((char)*data);
        break;
    }
    while(1)
    {
        delete data;
        break;
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        wchar_t VAR1;
        data = &VAR1;
        *data = L'A';
        printHexCharLine((char)*data);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
} 
