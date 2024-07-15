static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
<START>
            if (fread((wchar_t *)data, sizeof(wchar_t), (size_t)(100-1), stdin) == 0)
<END>
            {
                printLine("fread failed!");
            }
        }
    }
}
