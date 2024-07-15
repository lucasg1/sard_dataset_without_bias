void FUN0(char * data);
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "hostname");
    funcPtr(data);
}
void FUN0(char * data)
{
    if (!SetComputerNameA(data))
    {
        printLine("Failure setting computer name");
        exit(1);
    }
}
