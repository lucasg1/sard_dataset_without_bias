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
            if (fwscanf(stdin, L"%99s\0", data) == 0)
<END>
            {
                printLine("fwscanf failed!");
            }
        }
    }
}
