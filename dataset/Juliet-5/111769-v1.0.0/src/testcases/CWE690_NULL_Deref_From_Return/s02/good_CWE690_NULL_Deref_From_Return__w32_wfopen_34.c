typedef union
{
    FILE * unionFirst;
    FILE * unionSecond;
} CWE690_NULL_Deref_From_Return__w32_wfopen_34_unionType;
void FUN0()
{
    FILE * data;
    CWE690_NULL_Deref_From_Return__w32_wfopen_34_unionType myUnion;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    myUnion.unionFirst = data;
    {
        FILE * data = myUnion.unionSecond;
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
