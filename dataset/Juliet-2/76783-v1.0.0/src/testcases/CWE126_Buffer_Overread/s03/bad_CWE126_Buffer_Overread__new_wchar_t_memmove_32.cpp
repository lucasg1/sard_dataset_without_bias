namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    data = NULL;
    {
        wchar_t * data = *dataPtr1;
        data = new wchar_t[50];
        wmemset(data, L'A', 50-1); 
        data[50-1] = L'\0'; 
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        {
            wchar_t dest[100];
            wmemset(dest, L'C', 100-1);
            dest[100-1] = L'\0'; 
<START>
            memmove(dest, data, wcslen(dest)*sizeof(wchar_t));
<END>
            dest[100-1] = L'\0';
            printWLine(dest);
            delete [] data;
        }
    }
}
} 