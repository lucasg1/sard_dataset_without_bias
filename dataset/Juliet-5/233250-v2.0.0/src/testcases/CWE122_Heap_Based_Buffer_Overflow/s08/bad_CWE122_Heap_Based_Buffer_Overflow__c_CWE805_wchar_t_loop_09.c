void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        data[0] = L'\0'; 
    }
    {
        size_t i;
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        for (i = 0; i < 100; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        data[100-1] = L'\0'; 
        printWLine(data);
        free(data);
    }
}
