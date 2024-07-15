void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        char * data = *dataPtr1;
        strcpy(data, "hostname");
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        if (!SetComputerNameA(data))
        {
            printLine("Failure setting computer name");
            exit(1);
        }
    }
}
