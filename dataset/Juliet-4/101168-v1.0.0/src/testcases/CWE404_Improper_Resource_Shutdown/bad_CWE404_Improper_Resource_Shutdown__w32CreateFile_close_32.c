void FUN0()
{
    HANDLE data;
    HANDLE *dataPtr1 = &data;
    HANDLE *dataPtr2 = &data;
    data = INVALID_HANDLE_VALUE;
    {
        HANDLE data = *dataPtr1;
        data = CreateFile("BadSource_w32CreateFile.txt",
                          (GENERIC_WRITE|GENERIC_READ),
                          0,
                          NULL,
                          OPEN_ALWAYS,
                          FILE_ATTRIBUTE_NORMAL,
                          NULL);
        *dataPtr1 = data;
    }
    {
        HANDLE data = *dataPtr2;
        if (data != INVALID_HANDLE_VALUE)
        {
<START>
            _close((int)data);
<END>
        }
    }
}
