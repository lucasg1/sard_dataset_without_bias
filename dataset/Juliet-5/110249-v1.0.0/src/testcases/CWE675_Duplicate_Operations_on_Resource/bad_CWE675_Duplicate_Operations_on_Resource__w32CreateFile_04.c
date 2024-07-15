static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE; 
    if(STATIC_CONST_TRUE)
    {
        data = CreateFile("BadSource_w32CreateFile.txt",
                          (GENERIC_WRITE|GENERIC_READ),
                          0,
                          NULL,
                          OPEN_ALWAYS,
                          FILE_ATTRIBUTE_NORMAL,
                          NULL);
        CloseHandle(data);
    }
    if(STATIC_CONST_TRUE)
    {
<START>
        CloseHandle(data);
<END>
    }
}
