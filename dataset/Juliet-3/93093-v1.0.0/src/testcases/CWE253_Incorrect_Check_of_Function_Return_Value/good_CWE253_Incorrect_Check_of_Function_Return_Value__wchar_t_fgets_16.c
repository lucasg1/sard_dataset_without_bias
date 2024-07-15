void FUN0()
{
    while(1)
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
        break;
    }
}
