typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_34_unionType;
void FUN0()
{
    char * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_34_unionType myUnion;
    data = NULL;
    data = (char *)malloc((10+1)*sizeof(char));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char source[10+1] = SRC_STRING;
            strcpy(data, source);
            printLine(data);
            free(data);
        }
    }
}
