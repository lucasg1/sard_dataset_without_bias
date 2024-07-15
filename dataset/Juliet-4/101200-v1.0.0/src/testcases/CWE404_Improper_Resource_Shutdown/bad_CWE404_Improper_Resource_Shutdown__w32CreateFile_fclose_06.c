static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE;
    data = CreateFile("BadSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    if(STATIC_CONST_FIVE==5)
    {
        if (data != INVALID_HANDLE_VALUE)
        {
<START>
            fclose((FILE *)data);
<END>
        }
    }
}
