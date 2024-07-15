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
        data[0] = '\0'; 
    }
    return data;
}
void FUN1()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    VAR0 = 0; 
    data = FUN0(data);
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcat(data, source);
        printLine(data);
    }
}
static char * FUN2(char * data)
{
    if(VAR1)
    {
        data[0] = '\0'; 
    }
    return data;
}
void FUN3()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN2(data);
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcat(data, source);
        printLine(data);
    }
}
