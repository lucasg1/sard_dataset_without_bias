namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "hostname");
    {
        char * data = dataRef;
        if (!SetComputerNameA(data))
        {
            printLine("Failure setting computer name");
            exit(1);
        }
    }
}
} 
