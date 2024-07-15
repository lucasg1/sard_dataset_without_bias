namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        {
            wchar_t myString[] = L"myString";
            data = wcsdup(myString);
        }
        break;
    }
    while(1)
    {
        free(data);
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
        break;
    }
    while(1)
    {
        delete data;
        break;
    }
}
} 
