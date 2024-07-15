void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "hostname");
    {
        char * dataCopy = data;
        char * data = dataCopy;
        if (!SetComputerNameA(data))
        {
            printLine("Failure setting computer name");
            exit(1);
        }
    }
}
