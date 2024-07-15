void FUN0()
{
    if(globalReturnsTrueOrFalse())
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
    else
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            printLine("Please enter a string: ");
            if (fgetws(data, 100, stdin) == NULL)
            {
                printLine("fgetws failed!");
                exit(1);
            }
            printWLine(data);
        }
    }
}
