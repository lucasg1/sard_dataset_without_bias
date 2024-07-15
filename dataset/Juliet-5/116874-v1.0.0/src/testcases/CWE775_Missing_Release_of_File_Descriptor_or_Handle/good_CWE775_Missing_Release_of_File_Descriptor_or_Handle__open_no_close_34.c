typedef union
{
    int unionFirst;
    int unionSecond;
} CWE775_Missing_Release_of_File_Descriptor_or_Handle__open_no_close_34_unionType;
void FUN0()
{
    int data;
    CWE775_Missing_Release_of_File_Descriptor_or_Handle__open_no_close_34_unionType myUnion;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        if (data != -1)
        {
            CLOSE(data);
        }
    }
}
