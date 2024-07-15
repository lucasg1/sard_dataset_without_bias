typedef union
{
    FILE * unionFirst;
    FILE * unionSecond;
} CWE404_Improper_Resource_Shutdown__fopen_w32CloseHandle_34_unionType;
void FUN0()
{
    FILE * data;
    CWE404_Improper_Resource_Shutdown__fopen_w32CloseHandle_34_unionType myUnion;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    myUnion.unionFirst = data;
    {
        FILE * data = myUnion.unionSecond;
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
