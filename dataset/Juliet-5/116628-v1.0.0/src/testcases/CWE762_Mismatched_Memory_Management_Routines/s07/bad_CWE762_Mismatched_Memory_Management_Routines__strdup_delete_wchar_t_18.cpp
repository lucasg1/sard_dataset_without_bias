namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
    }
    goto sink;
sink:
<START>
    delete data;
<END>
}
} 
