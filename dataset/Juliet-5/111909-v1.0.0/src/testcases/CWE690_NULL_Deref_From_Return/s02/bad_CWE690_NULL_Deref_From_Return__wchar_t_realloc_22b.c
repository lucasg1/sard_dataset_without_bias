int VAR0 = 0;
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    data = (wchar_t *)realloc(data, 20*sizeof(wchar_t));
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(wchar_t * data)
{
    if(VAR0)
    {
<START>
        wcscpy(data, L"Initialize");
<END>
        printWLine(data);
        free(data);
    }
}
