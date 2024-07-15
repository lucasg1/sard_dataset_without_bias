namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    wchar_t VAR1[50];
    wchar_t VAR2[100];
    data = VAR1;
    data[0] = L'\0'; 
    {
        wchar_t * data = dataRef;
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
        }
    }
}
} 
