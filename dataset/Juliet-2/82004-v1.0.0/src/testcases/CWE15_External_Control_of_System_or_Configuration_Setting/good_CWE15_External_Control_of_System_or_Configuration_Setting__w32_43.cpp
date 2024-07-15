namespace NAMESPACE0
{
void FUN0(char * &data)
{
    strcpy(data, "hostname");
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    FUN0(data);
    if (!SetComputerNameA(data))
    {
        printLine("Failure setting computer name");
        exit(1);
    }
}
} 
