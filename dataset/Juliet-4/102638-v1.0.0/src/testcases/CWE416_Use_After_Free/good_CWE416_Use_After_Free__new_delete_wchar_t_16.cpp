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
        delete data;
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        data = new wchar_t;
        *data = L'A';
        break;
    }
    while(1)
    {
        printWcharLine(*data);
        break;
    }
}
} 
