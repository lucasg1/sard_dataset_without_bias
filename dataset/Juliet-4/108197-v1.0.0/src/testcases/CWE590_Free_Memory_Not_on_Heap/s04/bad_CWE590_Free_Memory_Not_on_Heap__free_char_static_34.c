typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE590_Free_Memory_Not_on_Heap__free_char_static_34_unionType;
void FUN0()
{
    char * data;
    CWE590_Free_Memory_Not_on_Heap__free_char_static_34_unionType myUnion;
    data = NULL; 
    {
        static char dataBuffer[100];
        memset(dataBuffer, 'A', 100-1); 
        dataBuffer[100-1] = '\0'; 
        data = dataBuffer;
    }
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        printLine(data);
<START>
        free(data);
<END>
    }
}
