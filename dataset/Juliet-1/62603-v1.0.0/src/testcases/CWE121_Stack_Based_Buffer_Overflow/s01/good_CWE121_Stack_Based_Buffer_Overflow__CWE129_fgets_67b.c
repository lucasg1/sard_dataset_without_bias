typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_67_structType
{
    int structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_67_structType myStruct);
void FUN1()
{
    int data;
    CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_67_structType myStruct;
    data = -1;
    data = 7;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_67_structType myStruct);
void FUN3()
{
    int data;
    CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_67_structType myStruct;
    data = -1;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_67_structType
{
    int structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
        int i;
        int buffer[10] = { 0 };
        if (data >= 0)
        {
            buffer[data] = 1;
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
    }
}
void FUN2(CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
        int i;
        int buffer[10] = { 0 };
        if (data >= 0 && data < (10))
        {
            buffer[data] = 1;
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
    }
}
