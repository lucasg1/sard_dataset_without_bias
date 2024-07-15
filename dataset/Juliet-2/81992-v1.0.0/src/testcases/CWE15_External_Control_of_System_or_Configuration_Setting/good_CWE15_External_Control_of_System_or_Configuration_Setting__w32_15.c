void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        strcpy(data, "hostname");
        break;
    }
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
    switch(6)
    {
    case 6:
        strcpy(data, "hostname");
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    if (!SetComputerNameA(data))
    {
        printLine("Failure setting computer name");
        exit(1);
    }
}
