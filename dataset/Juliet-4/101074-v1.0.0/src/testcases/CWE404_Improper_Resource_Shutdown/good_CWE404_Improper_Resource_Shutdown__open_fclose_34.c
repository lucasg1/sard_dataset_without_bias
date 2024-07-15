typedef union
{
    int unionFirst;
    int unionSecond;
} CWE404_Improper_Resource_Shutdown__open_fclose_34_unionType;
void FUN0()
{
    int data;
    CWE404_Improper_Resource_Shutdown__open_fclose_34_unionType myUnion;
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
