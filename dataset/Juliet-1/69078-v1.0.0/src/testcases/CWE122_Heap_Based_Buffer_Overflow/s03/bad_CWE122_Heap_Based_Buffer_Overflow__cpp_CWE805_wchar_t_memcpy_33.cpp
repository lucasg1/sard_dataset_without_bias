namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL;
    data = new wchar_t[50];
    data[0] = L'\0'; 
    {
        wchar_t * data = dataRef;
        {
            wchar_t source[100];
            wmemset(source, L'C', 100-1); 
            source[100-1] = L'\0'; 
<START>
            memcpy(data, source, 100*sizeof(wchar_t));
<END>
            data[100-1] = L'\0'; 
            printWLine(data);
            delete [] data;
        }
    }
}
} 
