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
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    return data;
}
void FUN1()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    VAR0 = 0; 
    data = FUN0(data);
    {
        char dest[50] = "";
        strcpy(dest, data);
        printLine(data);
        free(data);
    }
}
static char * FUN2(char * data)
{
    if(VAR1)
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    return data;
}
void FUN3()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    VAR1 = 1; 
    data = FUN2(data);
    {
        char dest[50] = "";
        strcpy(dest, data);
        printLine(data);
        free(data);
    }
}
