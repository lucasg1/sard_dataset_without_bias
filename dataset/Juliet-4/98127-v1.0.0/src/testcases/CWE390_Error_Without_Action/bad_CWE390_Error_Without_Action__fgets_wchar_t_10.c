void FUN0()
{
    if(globalTrue)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            printWLine(L"Please enter a string: ");
            if (fgetws(data, 100, stdin) == NULL)
            {
<START>
            }
<END>
            printWLine(data);
        }
    }
}
