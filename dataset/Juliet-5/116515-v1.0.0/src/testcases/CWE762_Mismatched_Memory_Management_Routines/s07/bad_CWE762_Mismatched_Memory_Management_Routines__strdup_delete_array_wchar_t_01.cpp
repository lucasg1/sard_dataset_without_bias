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
<START>
    delete [] data;
<END>
}
} 
