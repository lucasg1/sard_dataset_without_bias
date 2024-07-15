void FUN0()
{
    if(GLOBAL_CONST_TRUE)
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
