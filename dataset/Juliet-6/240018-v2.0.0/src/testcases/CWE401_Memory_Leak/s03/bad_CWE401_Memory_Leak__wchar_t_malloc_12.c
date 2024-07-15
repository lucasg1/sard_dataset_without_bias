void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wcscpy(data, L"A String");
        printWLine(data);
    }
    else
    {
        data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
<END>
        ; 
    }
    else
    {
        free(data);
    }
}
