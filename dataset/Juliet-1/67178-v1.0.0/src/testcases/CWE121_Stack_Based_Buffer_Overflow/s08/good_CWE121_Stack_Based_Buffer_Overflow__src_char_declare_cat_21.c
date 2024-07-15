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
    char dataBuffer[100];
    data = dataBuffer;
    VAR0 = 0; 
    data = FUN0(data);
    {
        char dest[50] = "";
        strcat(dest, data);
        printLine(data);
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
    char dataBuffer[100];
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN2(data);
    {
        char dest[50] = "";
        strcat(dest, data);
        printLine(data);
    }
}
