static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR1;
    if (!SetComputerNameA(data))
    {
        printLine("Failure setting computer name");
        exit(1);
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "hostname");
    VAR1 = data;
    FUN0();
}
