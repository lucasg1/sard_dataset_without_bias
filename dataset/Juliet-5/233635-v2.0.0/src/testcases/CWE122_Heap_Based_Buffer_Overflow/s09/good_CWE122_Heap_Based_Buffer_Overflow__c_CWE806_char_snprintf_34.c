typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_snprintf_34_unionType;
void FUN0()
{
    char * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_snprintf_34_unionType myUnion;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char dest[50] = "";
            SNPRINTF(dest, strlen(data), "%s", data);
            printLine(data);
            free(data);
        }
    }
}
