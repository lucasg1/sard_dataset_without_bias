namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    {
        wchar_t * data = dataRef;
        {
            wchar_t dest[50] = L"";
            wcsncat(dest, data, wcslen(data));
            dest[50-1] = L'\0'; 
            printWLine(data);
        }
    }
}
} 
