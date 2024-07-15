namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
    }
    {
        wchar_t * data = dataRef;
<START>
        delete [] data;
<END>
    }
}
} 
