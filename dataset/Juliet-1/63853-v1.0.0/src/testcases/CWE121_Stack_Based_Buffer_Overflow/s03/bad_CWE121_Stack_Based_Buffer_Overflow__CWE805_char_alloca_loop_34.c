typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_loop_34_unionType;
void FUN0()
{
    char * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_loop_34_unionType myUnion;
    char * VAR0 = (char *)ALLOCA(50*sizeof(char));
    char * VAR1 = (char *)ALLOCA(100*sizeof(char));
    data = VAR0;
    data[0] = '\0'; 
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            size_t i;
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
            for (i = 0; i < 100; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            data[100-1] = '\0'; 
            printLine(data);
        }
    }
}
