void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalFive==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(globalFive==5)
    {
<START>
        printWLine(data);
<END>
    }
}
