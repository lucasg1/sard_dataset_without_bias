namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char * VAR1 = (char *)ALLOCA(50*sizeof(char));
    char * VAR2 = (char *)ALLOCA(100*sizeof(char));
    memset(VAR1, 'A', 50-1); 
    VAR1[50-1] = '\0'; 
    memset(VAR2, 'A', 100-1); 
    VAR2[100-1] = '\0'; 
    data = VAR1;
    {
        char * data = dataRef;
        {
            size_t i, destLen;
            char dest[100];
            memset(dest, 'C', 100-1);
            dest[100-1] = '\0'; 
            destLen = strlen(dest);
            for (i = 0; i < destLen; i++)
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
} 
