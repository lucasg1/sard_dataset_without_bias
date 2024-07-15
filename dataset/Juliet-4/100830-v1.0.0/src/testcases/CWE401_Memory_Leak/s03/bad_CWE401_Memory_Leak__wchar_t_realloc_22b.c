int VAR0 = 0;
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    wcscpy(data, L"A String");
    printWLine(data);
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
