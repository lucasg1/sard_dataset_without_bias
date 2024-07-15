void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
    }
    if(globalReturnsTrue())
    {
        free(data);
    }
}
