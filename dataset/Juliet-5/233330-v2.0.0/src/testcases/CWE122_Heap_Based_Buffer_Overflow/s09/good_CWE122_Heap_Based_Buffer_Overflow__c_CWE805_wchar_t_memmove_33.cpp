namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    data[0] = L'\0'; 
    {
        wchar_t * data = dataRef;
        {
            wchar_t source[100];
            wmemset(source, L'C', 100-1); 
            source[100-1] = L'\0'; 
            memmove(data, source, 100*sizeof(wchar_t));
            data[100-1] = L'\0'; 
            printWLine(data);
            free(data);
        }
    }
}
} 
