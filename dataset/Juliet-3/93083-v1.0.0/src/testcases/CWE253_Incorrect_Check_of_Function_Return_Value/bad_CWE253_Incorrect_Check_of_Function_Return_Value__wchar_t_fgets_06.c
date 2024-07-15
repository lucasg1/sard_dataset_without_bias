static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            printLine("Please enter a string: ");
<START>
            if (fgetws(data, 100, stdin) < 0)
<END>
            {
                printLine("fgetws failed!");
                exit(1);
            }
            printWLine(data);
        }
    }
}
