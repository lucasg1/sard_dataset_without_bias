typedef union
{
    FILE * unionFirst;
    FILE * unionSecond;
} CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_34_unionType;
void FUN0()
{
    FILE * data;
    CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_34_unionType myUnion;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    myUnion.unionFirst = data;
    {
        FILE * data = myUnion.unionSecond;
        if (data != NULL)
        {
            fclose(data);
        }
        data = fopen("GoodSink_fopen.txt", "w+");
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
