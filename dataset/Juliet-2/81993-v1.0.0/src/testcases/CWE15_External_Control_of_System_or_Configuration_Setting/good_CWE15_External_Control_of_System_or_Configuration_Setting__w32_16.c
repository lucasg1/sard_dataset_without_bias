void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    while(1)
    {
        strcpy(data, "hostname");
        break;
    }
    if (!SetComputerNameA(data))
    {
        printLine("Failure setting computer name");
        exit(1);
    }
}
