typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_34_unionType;
void FUN0()
{
    char * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_34_unionType myUnion;
    data = NULL;
    data = (char *)malloc(10*sizeof(char));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char source[10+1] = SRC_STRING;
            size_t i, sourceLen;
            sourceLen = strlen(source);
            for (i = 0; i < sourceLen + 1; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            printLine(data);
            free(data);
        }
    }
}
