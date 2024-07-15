static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            wchar_t data[150], dest[100];
            wmemset(data, L'A', 149);
            data[149] = L'\0';
            memcpy(dest, data, 99*sizeof(wchar_t));
<START>
            printWLine(dest);
<END>
        }
    }
}
