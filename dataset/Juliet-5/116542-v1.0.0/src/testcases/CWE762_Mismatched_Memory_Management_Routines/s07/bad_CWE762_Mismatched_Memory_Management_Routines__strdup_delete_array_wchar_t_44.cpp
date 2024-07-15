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
    void (*funcPtr) (wchar_t *) = FUN0;
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
    }
    funcPtr(data);
}
} 
