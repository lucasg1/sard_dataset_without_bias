typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE690_NULL_Deref_From_Return__char_realloc_34_unionType;
void FUN0()
{
    char * data;
    CWE690_NULL_Deref_From_Return__char_realloc_34_unionType myUnion;
    data = NULL; 
    data = (char *)realloc(data, 20*sizeof(char));
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
<START>
        strcpy(data, "Initialize");
<END>
        printLine(data);
        free(data);
    }
}
