namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
    {
        size_t i;
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        for (i = 0; i < 100; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        data[100-1] = L'\0'; 
        printWLine(data);
        delete [] data;
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[50];
    data[0] = L'\0'; 
    FUN0(data);
}
} 
