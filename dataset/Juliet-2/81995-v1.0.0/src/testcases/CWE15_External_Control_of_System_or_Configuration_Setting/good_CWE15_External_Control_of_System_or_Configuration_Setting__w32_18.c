void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    goto source;
source:
    strcpy(data, "hostname");
    if (!SetComputerNameA(data))
    {
        printLine("Failure setting computer name");
        exit(1);
    }
}
