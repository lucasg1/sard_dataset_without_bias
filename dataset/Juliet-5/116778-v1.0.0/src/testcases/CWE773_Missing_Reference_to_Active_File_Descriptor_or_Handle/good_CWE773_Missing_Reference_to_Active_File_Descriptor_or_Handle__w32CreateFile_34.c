typedef union
{
    HANDLE unionFirst;
    HANDLE unionSecond;
} CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__w32CreateFile_34_unionType;
void FUN0()
{
    HANDLE data;
    CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__w32CreateFile_34_unionType myUnion;
    data = INVALID_HANDLE_VALUE;
    data = CreateFile("BadSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    myUnion.unionFirst = data;
    {
        HANDLE data = myUnion.unionSecond;
        if (data != INVALID_HANDLE_VALUE)
        {
            CloseHandle(data);
        }
        data = CreateFile("GoodSink_w32CreateFile.txt",
                          (GENERIC_WRITE|GENERIC_READ),
                          0,
                          NULL,
                          OPEN_ALWAYS,
                          FILE_ATTRIBUTE_NORMAL,
                          NULL);
        if (data != INVALID_HANDLE_VALUE)
        {
            CloseHandle(data);
        }
    }
}
