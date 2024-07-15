static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
        {
            wchar_t data[150], dest[100];
            wmemset(data, L'A', 149);
            data[149] = L'\0';
            wcsncpy(dest, data, 99);
<START>
            printWLine(dest);
<END>
        }
    }
}
