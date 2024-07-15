void FUN0()
{
    goto sink;
sink:
    {
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
<START>
        SNPRINTF(data,100-wcslen(SRC)-1, L"%s\n", SRC);
<END>
    }
}
