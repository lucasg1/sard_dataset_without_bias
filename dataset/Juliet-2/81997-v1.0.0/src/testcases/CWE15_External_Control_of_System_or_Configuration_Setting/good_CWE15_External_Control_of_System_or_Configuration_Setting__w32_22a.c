extern int VAR0;
extern int VAR1;
char * FUN0(char * data)
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
char * FUN1(char * data)
{
    if(VAR1)
    {
        strcpy(data, "hostname");
    }
    return data;
}
int VAR0 = 0;
int VAR1 = 0;
char * FUN0(char * data);
void FUN3()
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
char * FUN1(char * data);
void FUN5()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN1(data);
    if (!SetComputerNameA(data))
    {
        printLine("Failure setting computer name");
        exit(1);
    }
}
