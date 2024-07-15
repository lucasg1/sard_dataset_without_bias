typedef struct _CWE400_Resource_Exhaustion__fscanf_fwrite_67_structType
{
    int structFirst;
} CWE400_Resource_Exhaustion__fscanf_fwrite_67_structType;
void FUN0(CWE400_Resource_Exhaustion__fscanf_fwrite_67_structType myStruct);
void FUN1()
{
    int count;
    CWE400_Resource_Exhaustion__fscanf_fwrite_67_structType myStruct;
    count = -1;
    fscanf(stdin, "%d", &count);
    myStruct.structFirst = count;
    FUN0(myStruct);
}
typedef struct _CWE400_Resource_Exhaustion__fscanf_fwrite_67_structType
{
    int structFirst;
} CWE400_Resource_Exhaustion__fscanf_fwrite_67_structType;
void FUN0(CWE400_Resource_Exhaustion__fscanf_fwrite_67_structType myStruct)
{
    int count = myStruct.structFirst;
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_bad.txt";
        pFile = fopen(filename, "w+");
        if (pFile == NULL)
        {
            exit(1);
        }
<START>
        for (i = 0; i < (size_t)count; i++)
<END>
        {
            if (strlen(SENTENCE) != fwrite(SENTENCE, sizeof(char), strlen(SENTENCE), pFile))
            {
                exit(1);
            }
        }
        if (pFile)
        {
            fclose(pFile);
        }
    }
}
