static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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
