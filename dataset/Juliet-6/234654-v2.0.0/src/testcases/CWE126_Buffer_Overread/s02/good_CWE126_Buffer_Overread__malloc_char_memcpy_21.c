static int VAR0 = 0;
static int VAR1 = 0;
static char * FUN0(char * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
    }
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    VAR0 = 0; 
    data = FUN0(data);
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        memcpy(dest, data, strlen(dest)*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
        free(data);
    }
}
static char * FUN2(char * data)
{
    if(VAR1)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
    }
    return data;
}
void FUN3()
{
    char * data;
    data = NULL;
    VAR1 = 1; 
    data = FUN2(data);
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        memcpy(dest, data, strlen(dest)*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
        free(data);
    }
}
