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
        {
            wchar_t * dataBuffer = new wchar_t[100];
            wmemset(dataBuffer, L'A', 100-1);
            dataBuffer[100-1] = L'\0';
            data = dataBuffer - 8;
        }
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        {
            wchar_t dest[100*2];
            wmemset(dest, L'C', 100*2-1); 
            dest[100*2-1] = L'\0'; 
<START>
            wcscpy(dest, data);
<END>
            printWLine(dest);
        }
    }
}
} 
