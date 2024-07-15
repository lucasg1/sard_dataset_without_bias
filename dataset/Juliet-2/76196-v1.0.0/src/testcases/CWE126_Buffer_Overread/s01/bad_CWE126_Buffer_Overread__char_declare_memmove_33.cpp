namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char VAR1[50];
    char VAR2[100];
    memset(VAR1, 'A', 50-1); 
    VAR1[50-1] = '\0'; 
    memset(VAR2, 'A', 100-1); 
    VAR2[100-1] = '\0'; 
    data = VAR1;
    {
        char * data = dataRef;
        {
            char dest[100];
            memset(dest, 'C', 100-1);
            dest[100-1] = '\0'; 
<START>
            memmove(dest, data, strlen(dest)*sizeof(char));
<END>
            dest[100-1] = '\0';
            printLine(dest);
        }
    }
}
} 
