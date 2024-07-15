typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_34_unionType;
void FUN0()
{
    char * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_34_unionType myUnion;
    char dataBuffer[100];
    data = dataBuffer;
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char dest[50] = "";
            size_t i, dataLen;
            dataLen = strlen(data);
            for (i = 0; i < dataLen; i++)
            {
<START>
                dest[i] = data[i];
<END>
            }
            dest[50-1] = '\0'; 
            printLine(data);
        }
    }
}
