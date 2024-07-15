void FUN0(wchar_t * data)
{
<START>
<END>
    ; 
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
        printWLine(data);
    }
    FUN0(data);
}
