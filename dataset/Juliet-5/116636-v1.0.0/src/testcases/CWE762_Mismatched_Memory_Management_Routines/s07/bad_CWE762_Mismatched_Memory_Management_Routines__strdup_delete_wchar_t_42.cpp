namespace NAMESPACE0
{
static wchar_t * FUN0(wchar_t * data)
{
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
    }
    return data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = FUN0(data);
<START>
    delete data;
<END>
}
} 
