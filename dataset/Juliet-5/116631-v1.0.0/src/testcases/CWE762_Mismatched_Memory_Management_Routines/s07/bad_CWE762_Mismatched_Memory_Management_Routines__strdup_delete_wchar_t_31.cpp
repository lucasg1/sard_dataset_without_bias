namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
    }
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
<START>
        delete data;
<END>
    }
}
} 
