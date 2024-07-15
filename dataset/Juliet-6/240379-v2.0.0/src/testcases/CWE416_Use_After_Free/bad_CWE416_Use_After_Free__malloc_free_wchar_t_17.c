void FUN0()
{
    int i,j;
    wchar_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    for(j = 0; j < 1; j++)
    {
<START>
        printWLine(data);
<END>
    }
}
