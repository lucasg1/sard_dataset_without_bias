typedef union
{
    HANDLE unionFirst;
    HANDLE unionSecond;
} CWE404_Improper_Resource_Shutdown__w32CreateFile_fclose_34_unionType;
void FUN0()
{
    HANDLE data;
    CWE404_Improper_Resource_Shutdown__w32CreateFile_fclose_34_unionType myUnion;
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
    }
}
