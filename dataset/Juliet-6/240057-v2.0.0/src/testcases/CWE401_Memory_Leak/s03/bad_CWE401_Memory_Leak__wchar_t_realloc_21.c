static int VAR0 = 0;
void FUN0(wchar_t * data)
{
    if(VAR0)
    {
<START>
<END>
        ; 
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wcscpy(data, L"A String");
    printWLine(data);
    VAR0 = 1; 
    FUN0(data);
}
