namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(wchar_t * data)
{
    if(VAR1)
    {
<START>
        delete data;
<END>
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
    }
    VAR1 = 1; 
    FUN0(data);
}
} 
