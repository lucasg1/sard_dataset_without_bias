typedef struct _CWE606_Unchecked_Loop_Condition__char_file_67_structType
{
    char * structFirst;
} CWE606_Unchecked_Loop_Condition__char_file_67_structType;
void FUN0(CWE606_Unchecked_Loop_Condition__char_file_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE606_Unchecked_Loop_Condition__char_file_67_structType myStruct;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "15");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE606_Unchecked_Loop_Condition__char_file_67_structType myStruct);
void FUN3()
{
    char * data;
    CWE606_Unchecked_Loop_Condition__char_file_67_structType myStruct;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        FILE * pFile;
        if (100-dataLen > 1)
        {
            pFile = fopen(FILENAME, "r");
            if (pFile != NULL)
            {
                if (fgets(data+dataLen, (int)(100-dataLen), pFile) == NULL)
                {
                    printLine("fgets() failed");
                    data[dataLen] = '\0';
                }
                fclose(pFile);
            }
        }
    }
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE606_Unchecked_Loop_Condition__char_file_67_structType
{
    char * structFirst;
} CWE606_Unchecked_Loop_Condition__char_file_67_structType;
void FUN0(CWE606_Unchecked_Loop_Condition__char_file_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        int i, n, intVariable;
        if (sscanf(data, "%d", &n) == 1)
        {
            intVariable = 0;
            for (i = 0; i < n; i++)
            {
                intVariable++; 
            }
            printIntLine(intVariable);
        }
    }
}
void FUN2(CWE606_Unchecked_Loop_Condition__char_file_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        int i, n, intVariable;
        if (sscanf(data, "%d", &n) == 1)
        {
            if (n < MAX_LOOP)
            {
                intVariable = 0;
                for (i = 0; i < n; i++)
                {
                    intVariable++; 
                }
                printIntLine(intVariable);
            }
        }
    }
}
