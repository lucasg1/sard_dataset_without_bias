typedef union
{
    int unionFirst;
    int unionSecond;
} CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_34_unionType;
void FUN0()
{
    int data;
    CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_34_unionType myUnion;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        if (data != -1)
        {
            CLOSE(data);
        }
        data = OPEN("GoodSink_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        if (data != -1)
        {
            CLOSE(data);
        }
    }
}
