static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(STATIC_CONST_TRUE)
    {
        wmemset(data, L'A', 100-1); 
        data[100-1] = L'\0'; 
    }
    {
        wchar_t dest[50] = L"";
<START>
        SNPRINTF(dest, wcslen(data), L"%s", data);
<END>
        printWLine(data);
    }
}
