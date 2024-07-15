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
        strcat(data, NEW_PATH);
    }
    return data;
}
void FUN1()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    VAR0 = 0; 
    data = FUN0(data);
    PUTENV(data);
}
static char * FUN2(char * data)
{
    if(VAR1)
    {
        strcat(data, NEW_PATH);
    }
    return data;
}
void FUN3()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN2(data);
    PUTENV(data);
}
