void FUN0()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    switch(6)
    {
    case 6:
        data = CreateFile("BadSource_w32CreateFile.txt",
                          (GENERIC_WRITE|GENERIC_READ),
                          0,
                          NULL,
                          OPEN_ALWAYS,
                          FILE_ATTRIBUTE_NORMAL,
                          NULL);
        CloseHandle(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        CloseHandle(data);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
