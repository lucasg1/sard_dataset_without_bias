void FUN0()
{
    goto sink;
sink:
    {
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
        printWLine(L"Please enter a string: ");
        if (fgetws(data, 100, stdin) == NULL)
        {
            printWLine(L"fgetws failed!");
            exit(1);
        }
        printWLine(data);
    }
}
