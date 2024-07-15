static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
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
