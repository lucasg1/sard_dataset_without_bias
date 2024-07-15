void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
<START>
            SNPRINTF(data,100-wcslen(SRC)-1, L"%s\n", SRC);
<END>
        }
    }
}
