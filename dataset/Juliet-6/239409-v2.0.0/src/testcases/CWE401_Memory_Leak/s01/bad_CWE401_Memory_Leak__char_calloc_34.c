typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE401_Memory_Leak__char_calloc_34_unionType;
void FUN0()
{
    char * data;
    CWE401_Memory_Leak__char_calloc_34_unionType myUnion;
    data = NULL;
    data = (char *)calloc(100, sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
<START>
<END>
        ; 
    }
}
