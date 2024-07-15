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
    void * data;
    data = NULL;
    if(FUN0())
    {
        {
            wchar_t * dataBadBuffer = (wchar_t *)malloc(50*sizeof(wchar_t));
            if (dataBadBuffer == NULL) {exit(-1);}
            wmemset(dataBadBuffer, L'A', 50-1);
            dataBadBuffer[50-1] = L'\0';
            data = (void *)dataBadBuffer;
        }
    }
    if(FUN0())
    {
        {
            size_t dataLen = strlen((char *)data);
            void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
            if (dest == NULL) {exit(-1);}
<START>
            (void)wcscpy(dest, data);
<END>
            printLine((char *)dest);
            free(dest);
        }
    }
}
