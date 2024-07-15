void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(1)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
    }
    if(1)
    {
        free(data);
    }
}
