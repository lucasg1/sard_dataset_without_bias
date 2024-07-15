static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            printLine("Please enter a string: ");
<START>
            fgetws(data, 100, stdin);
<END>
            printWLine(data);
        }
    }
}
