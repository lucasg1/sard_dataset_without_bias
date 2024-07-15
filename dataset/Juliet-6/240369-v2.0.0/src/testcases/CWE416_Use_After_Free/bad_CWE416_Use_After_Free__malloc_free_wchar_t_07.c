static int staticFive = 5;
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(staticFive==5)
    {
<START>
        printWLine(data);
<END>
    }
}
