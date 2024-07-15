void FUN0()
{
    switch(6)
    {
    case 6:
    {
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
<START>
        fwscanf(stdin, L"%99s\0", data);
<END>
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
