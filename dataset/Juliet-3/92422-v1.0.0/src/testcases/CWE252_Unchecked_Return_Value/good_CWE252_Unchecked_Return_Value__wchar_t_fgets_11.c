void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
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
void FUN1()
{
    if(globalReturnsTrue())
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
