void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN1(char * data);
void FUN3()
{
    char * data;
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
    FUN1(data);
}
void FUN4(char * data);
void FUN0(char * data)
{
    FUN4(data);
}
void FUN6(char * data);
void FUN4(char * data)
{
    FUN6(data);
}
void FUN6(char * data)
{
    {
        int i, n, intVariable;
        if (sscanf(data, "%d", &n) == 1)
        {
            intVariable = 0;
<START>
            for (i = 0; i < n; i++)
<END>
            {
                intVariable++; 
            }
            printIntLine(intVariable);
        }
    }
}
