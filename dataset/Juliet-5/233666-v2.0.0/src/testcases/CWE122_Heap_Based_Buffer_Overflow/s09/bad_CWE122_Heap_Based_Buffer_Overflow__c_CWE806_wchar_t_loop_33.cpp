namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    {
        wchar_t * data = dataRef;
        {
            wchar_t dest[50] = L"";
            size_t i, dataLen;
            dataLen = wcslen(data);
            for (i = 0; i < dataLen; i++)
            {
<START>
                dest[i] = data[i];
<END>
            }
            dest[50-1] = L'\0'; 
            printWLine(data);
            free(data);
        }
    }
}
} 
