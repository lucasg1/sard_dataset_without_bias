typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_34_unionType;
void FUN0()
{
    char * data;
    CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_34_unionType myUnion;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char dest[50] = "";
<START>
            strcat(dest, data);
<END>
            printLine(data);
            free(data);
        }
    }
}
