void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
<END>
        ; 
    }
}
