typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE127_Buffer_Underread__char_declare_loop_34_unionType;
void FUN0()
{
    char * data;
    CWE127_Buffer_Underread__char_declare_loop_34_unionType myUnion;
    char dataBuffer[100];
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    data = dataBuffer - 8;
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
<START>
                dest[i] = data[i];
<END>
            }
            dest[100-1] = '\0';
            printLine(dest);
        }
    }
}
