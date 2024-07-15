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
        strcpy(data, "hostname");
    }
    return data;
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    VAR0 = 0; 
    data = FUN0(data);
    if (!SetComputerNameA(data))
    {
        printLine("Failure setting computer name");
        exit(1);
    }
}
static char * FUN2(char * data)
{
    if(VAR1)
    {
        strcpy(data, "hostname");
    }
    return data;
}
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN2(data);
    if (!SetComputerNameA(data))
    {
        printLine("Failure setting computer name");
        exit(1);
    }
}
