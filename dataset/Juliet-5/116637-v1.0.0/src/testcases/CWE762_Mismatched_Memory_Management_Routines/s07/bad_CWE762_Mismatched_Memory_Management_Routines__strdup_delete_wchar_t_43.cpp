namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    FUN0(data);
<START>
    delete data;
<END>
}
} 
