typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE15_External_Control_of_System_or_Configuration_Setting__w32_34_unionType;
void FUN0()
{
    char * data;
    CWE15_External_Control_of_System_or_Configuration_Setting__w32_34_unionType myUnion;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "hostname");
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        if (!SetComputerNameA(data))
        {
            printLine("Failure setting computer name");
            exit(1);
        }
    }
}
