void FUN0()
{
    switch(6)
    {
    case 6:
    {
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
<START>
        fread((wchar_t *)data, sizeof(wchar_t), (size_t)(100-1), stdin);
<END>
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
