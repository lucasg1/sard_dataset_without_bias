void FUN0()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
<START>
    free(data);
<END>
    free(data);
}
