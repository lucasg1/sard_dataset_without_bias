void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
void FUN1()
{
    switch(6)
    {
    case 6:
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
    default:
        printLine("Benign, fixed string");
        break;
    }
}
