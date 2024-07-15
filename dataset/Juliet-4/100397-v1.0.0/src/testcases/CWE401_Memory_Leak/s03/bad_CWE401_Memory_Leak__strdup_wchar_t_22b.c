int VAR0 = 0;
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
        printWLine(data);
    }
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(wchar_t * data)
{
    if(VAR0)
    {
<START>
<END>
        ; 
    }
}
