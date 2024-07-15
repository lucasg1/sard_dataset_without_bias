typedef union
{
    HANDLE unionFirst;
    HANDLE unionSecond;
} CWE775_Missing_Release_of_File_Descriptor_or_Handle__w32CreateFile_no_close_34_unionType;
void FUN0()
{
    HANDLE data;
    CWE775_Missing_Release_of_File_Descriptor_or_Handle__w32CreateFile_no_close_34_unionType myUnion;
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
<START>
<END>
        ; 
    }
}
