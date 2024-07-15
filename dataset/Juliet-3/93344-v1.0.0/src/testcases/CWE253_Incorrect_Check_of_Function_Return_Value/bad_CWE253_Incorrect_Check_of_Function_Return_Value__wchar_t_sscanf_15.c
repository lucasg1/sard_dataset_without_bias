void FUN0()
{
    switch(6)
    {
    case 6:
    {
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
<START>
        if (swscanf(SRC_STRING, L"%99s\0", data) == 0)
<END>
        {
            printLine("swscanf failed!");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
