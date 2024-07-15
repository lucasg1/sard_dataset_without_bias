namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
<START>
    delete [] data;
<END>
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
    }
    FUN0(data);
}
} 
