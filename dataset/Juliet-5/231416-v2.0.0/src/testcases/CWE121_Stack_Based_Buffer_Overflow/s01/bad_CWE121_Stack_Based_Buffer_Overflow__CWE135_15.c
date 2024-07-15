void FUN0()
{
    void * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (void *)WIDE_STRING;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
<START>
        size_t dataLen = strlen((char *)data);
<END>
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy(dest, data);
        printLine((char *)dest);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
