void FUN0()
{
    {
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
        printLine("Please enter a string: ");
<START>
        fgetws(data, 100, stdin);
<END>
        printWLine(data);
    }
}
