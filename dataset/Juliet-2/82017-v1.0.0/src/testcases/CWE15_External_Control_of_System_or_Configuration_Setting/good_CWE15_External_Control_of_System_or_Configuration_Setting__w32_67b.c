typedef struct _CWE15_External_Control_of_System_or_Configuration_Setting__w32_67_structType
{
    char * structFirst;
} CWE15_External_Control_of_System_or_Configuration_Setting__w32_67_structType;
void FUN0(CWE15_External_Control_of_System_or_Configuration_Setting__w32_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE15_External_Control_of_System_or_Configuration_Setting__w32_67_structType myStruct;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "hostname");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE15_External_Control_of_System_or_Configuration_Setting__w32_67_structType
{
    char * structFirst;
} CWE15_External_Control_of_System_or_Configuration_Setting__w32_67_structType;
void FUN0(CWE15_External_Control_of_System_or_Configuration_Setting__w32_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    if (!SetComputerNameA(data))
    {
        printLine("Failure setting computer name");
        exit(1);
    }
}
