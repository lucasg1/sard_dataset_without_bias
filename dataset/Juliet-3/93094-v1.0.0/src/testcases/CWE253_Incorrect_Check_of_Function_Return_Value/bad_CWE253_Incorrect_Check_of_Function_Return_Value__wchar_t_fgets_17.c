void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
