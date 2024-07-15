typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE126_Buffer_Overread__char_alloca_loop_34_unionType;
void FUN0()
{
    char * data;
    CWE126_Buffer_Overread__char_alloca_loop_34_unionType myUnion;
    char * VAR0 = (char *)ALLOCA(50*sizeof(char));
    char * VAR1 = (char *)ALLOCA(100*sizeof(char));
    memset(VAR0, 'A', 50-1); 
    VAR0[50-1] = '\0'; 
    memset(VAR1, 'A', 100-1); 
    VAR1[100-1] = '\0'; 
    data = VAR1;
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            size_t i, destLen;
            char dest[100];
            memset(dest, 'C', 100-1);
            dest[100-1] = '\0'; 
            destLen = strlen(dest);
            for (i = 0; i < destLen; i++)
            {
                dest[i] = data[i];
            }
            dest[100-1] = '\0';
            printLine(dest);
        }
    }
}
