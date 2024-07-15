static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
<START>
            if (SNPRINTF(data,100-wcslen(SRC_STRING)-1, L"%s\n", SRC_STRING) == 0)
<END>
            {
                printLine("snprintf failed!");
            }
        }
    }
}
