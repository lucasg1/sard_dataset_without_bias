typedef union
{
    HANDLE unionFirst;
    HANDLE unionSecond;
} CWE675_Duplicate_Operations_on_Resource__w32CreateFile_34_unionType;
void FUN0()
{
    HANDLE data;
    CWE675_Duplicate_Operations_on_Resource__w32CreateFile_34_unionType myUnion;
    data = INVALID_HANDLE_VALUE; 
    data = CreateFile("BadSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    CloseHandle(data);
    myUnion.unionFirst = data;
    {
        HANDLE data = myUnion.unionSecond;
<START>
        CloseHandle(data);
<END>
    }
}
