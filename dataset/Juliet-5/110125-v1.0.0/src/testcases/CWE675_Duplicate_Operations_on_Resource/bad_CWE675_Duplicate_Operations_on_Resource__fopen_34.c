typedef union
{
    FILE * unionFirst;
    FILE * unionSecond;
} CWE675_Duplicate_Operations_on_Resource__fopen_34_unionType;
void FUN0()
{
    FILE * data;
    CWE675_Duplicate_Operations_on_Resource__fopen_34_unionType myUnion;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    myUnion.unionFirst = data;
    {
        FILE * data = myUnion.unionSecond;
<START>
        fclose(data);
<END>
    }
}
