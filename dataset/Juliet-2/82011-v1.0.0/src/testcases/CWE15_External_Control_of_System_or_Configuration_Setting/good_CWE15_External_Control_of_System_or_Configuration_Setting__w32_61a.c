char * FUN0(char * data)
{
    strcpy(data, "hostname");
    return data;
}
char * FUN0(char * data);
void FUN2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    data = FUN0(data);
    if (!SetComputerNameA(data))
    {
        printLine("Failure setting computer name");
        exit(1);
    }
}
