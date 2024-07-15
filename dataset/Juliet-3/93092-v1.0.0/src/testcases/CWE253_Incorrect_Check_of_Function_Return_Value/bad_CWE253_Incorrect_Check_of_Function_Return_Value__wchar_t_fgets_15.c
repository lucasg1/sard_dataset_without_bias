void FUN0()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
