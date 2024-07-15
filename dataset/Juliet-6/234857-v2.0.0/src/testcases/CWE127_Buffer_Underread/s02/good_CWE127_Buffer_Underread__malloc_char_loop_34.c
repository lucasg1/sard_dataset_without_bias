typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE127_Buffer_Underread__malloc_char_loop_34_unionType;
void FUN0()
{
    char * data;
    CWE127_Buffer_Underread__malloc_char_loop_34_unionType myUnion;
    data = NULL;
    {
        char * dataBuffer = (char *)malloc(100*sizeof(char));
        if (dataBuffer == NULL) {exit(-1);}
        memset(dataBuffer, 'A', 100-1);
        dataBuffer[100-1] = '\0';
        data = dataBuffer;
    }
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            size_t i;
            char dest[100];
            memset(dest, 'C', 100-1); 
            dest[100-1] = '\0'; 
            for (i = 0; i < 100; i++)
            {
                dest[i] = data[i];
            }
            dest[100-1] = '\0';
            printLine(dest);
        }
    }
}
