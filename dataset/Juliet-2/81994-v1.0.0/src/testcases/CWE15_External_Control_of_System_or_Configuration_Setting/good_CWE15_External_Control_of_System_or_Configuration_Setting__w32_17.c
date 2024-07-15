void FUN0()
{
    int h;
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    for(h = 0; h < 1; h++)
    {
        strcpy(data, "hostname");
    }
    if (!SetComputerNameA(data))
    {
        printLine("Failure setting computer name");
        exit(1);
    }
}
