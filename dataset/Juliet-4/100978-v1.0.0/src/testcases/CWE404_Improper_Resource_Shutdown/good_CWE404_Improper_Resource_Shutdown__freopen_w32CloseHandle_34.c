typedef union
{
    FILE * unionFirst;
    FILE * unionSecond;
} CWE404_Improper_Resource_Shutdown__freopen_w32CloseHandle_34_unionType;
void FUN0()
{
    FILE * data;
    CWE404_Improper_Resource_Shutdown__freopen_w32CloseHandle_34_unionType myUnion;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    myUnion.unionFirst = data;
    {
        FILE * data = myUnion.unionSecond;
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
