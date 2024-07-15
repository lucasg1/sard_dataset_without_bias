void FUN0()
{
    void * data;
    void * *dataPtr1 = &data;
    void * *dataPtr2 = &data;
    data = NULL;
    {
        void * data = *dataPtr1;
        {
            wchar_t * dataBadBuffer = (wchar_t *)malloc(50*sizeof(wchar_t));
            if (dataBadBuffer == NULL) {exit(-1);}
            wmemset(dataBadBuffer, L'A', 50-1);
            dataBadBuffer[50-1] = L'\0';
            data = (void *)dataBadBuffer;
        }
        *dataPtr1 = data;
    }
    {
        void * data = *dataPtr2;
        {
<START>
            size_t dataLen = strlen((char *)data);
<END>
            void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
            if (dest == NULL) {exit(-1);}
            (void)wcscpy(dest, data);
            printLine((char *)dest);
            free(dest);
        }
    }
}
