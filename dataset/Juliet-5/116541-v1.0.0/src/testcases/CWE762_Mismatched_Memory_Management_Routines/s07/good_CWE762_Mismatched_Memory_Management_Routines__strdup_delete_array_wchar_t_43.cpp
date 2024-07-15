namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = new wchar_t[100];
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    FUN0(data);
    delete [] data;
}
void FUN2(wchar_t * &data)
{
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    FUN2(data);
    free(data);
}
} 
