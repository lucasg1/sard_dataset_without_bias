static int staticFive = 5;
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (wchar_t *)malloc(10*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    {
        wchar_t source[10+1] = SRC_STRING;
<START>
        wcscpy(data, source);
<END>
        printWLine(data);
        free(data);
    }
}
