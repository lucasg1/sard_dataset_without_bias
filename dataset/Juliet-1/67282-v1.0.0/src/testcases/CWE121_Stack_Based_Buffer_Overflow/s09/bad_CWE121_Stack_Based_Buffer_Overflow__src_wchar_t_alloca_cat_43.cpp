namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
}
void FUN1()
{
    wchar_t * data;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBuffer;
    FUN0(data);
    {
        wchar_t dest[50] = L"";
<START>
        wcscat(dest, data);
<END>
        printWLine(data);
    }
}
} 
