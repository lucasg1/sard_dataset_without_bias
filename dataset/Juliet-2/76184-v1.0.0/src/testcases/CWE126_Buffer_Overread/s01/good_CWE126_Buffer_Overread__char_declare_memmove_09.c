void FUN0()
{
    char * data;
    char VAR0[50];
    char VAR1[100];
    memset(VAR0, 'A', 50-1); 
    VAR0[50-1] = '\0'; 
    memset(VAR1, 'A', 100-1); 
    VAR1[100-1] = '\0'; 
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = VAR1;
    }
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        memmove(dest, data, strlen(dest)*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
    }
}
void FUN1()
{
    char * data;
    char VAR0[50];
    char VAR1[100];
    memset(VAR0, 'A', 50-1); 
    VAR0[50-1] = '\0'; 
    memset(VAR1, 'A', 100-1); 
    VAR1[100-1] = '\0'; 
    if(GLOBAL_CONST_TRUE)
    {
        data = VAR1;
    }
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        memmove(dest, data, strlen(dest)*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
    }
}
