static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
}
void FUN1()
{
    if(staticFive==5)
    {
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
}
