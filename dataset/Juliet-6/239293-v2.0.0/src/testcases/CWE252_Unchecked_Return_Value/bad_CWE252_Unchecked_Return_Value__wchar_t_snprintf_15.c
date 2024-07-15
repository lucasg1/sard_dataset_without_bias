void FUN0()
{
    switch(6)
    {
    case 6:
    {
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
<START>
        SNPRINTF(data,100-wcslen(SRC)-1, L"%s\n", SRC);
<END>
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
