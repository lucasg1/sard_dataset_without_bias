typedef union
{
    FILE * unionFirst;
    FILE * unionSecond;
} CWE690_NULL_Deref_From_Return__fopen_34_unionType;
void FUN0()
{
    FILE * data;
    CWE690_NULL_Deref_From_Return__fopen_34_unionType myUnion;
    data = NULL;
    data = fopen("file.txt", "w+");
    myUnion.unionFirst = data;
    {
        FILE * data = myUnion.unionSecond;
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
