namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    {
        wchar_t * data = dataRef;
        {
            wchar_t dest[50] = L"";
<START>
            wcsncpy(dest, data, wcslen(data));
<END>
            dest[50-1] = L'\0'; 
            printWLine(data);
        }
    }
}
} 
