static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    wchar_t * data;
    data = NULL;
    if(FUN0())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(FUN0())
    {
<START>
        printWLine(data);
<END>
    }
}
