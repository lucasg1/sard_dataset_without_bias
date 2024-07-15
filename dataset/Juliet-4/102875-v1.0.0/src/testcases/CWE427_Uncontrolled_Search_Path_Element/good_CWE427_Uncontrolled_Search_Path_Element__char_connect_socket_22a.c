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
        strcat(data, NEW_PATH);
    }
    return data;
}
char * FUN1(char * data)
{
    if(VAR1)
    {
        strcat(data, NEW_PATH);
    }
    return data;
}
int VAR0 = 0;
int VAR1 = 0;
char * FUN0(char * data);
void FUN3()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    VAR0 = 0; 
    data = FUN0(data);
    PUTENV(data);
}
char * FUN1(char * data);
void FUN5()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN1(data);
    PUTENV(data);
}
