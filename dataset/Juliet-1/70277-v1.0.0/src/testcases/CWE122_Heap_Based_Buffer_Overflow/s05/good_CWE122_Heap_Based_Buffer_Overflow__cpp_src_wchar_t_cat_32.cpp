namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    data = new wchar_t[100];
    {
        wchar_t * data = *dataPtr1;
        wmemset(data, L'A', 50-1); 
        data[50-1] = L'\0'; 
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        {
            wchar_t dest[50] = L"";
            wcscat(dest, data);
            printWLine(data);
            delete [] data;
        }
    }
}
} 
