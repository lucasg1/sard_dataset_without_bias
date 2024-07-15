void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN3(char * data)
{
    FUN2(data);
}
void FUN4(char * data);
void FUN0(char * data)
{
    FUN4(data);
}
void FUN6(char * data);
void FUN2(char * data)
{
    FUN6(data);
}
void FUN1(char * data);
void FUN9(char * data)
{
    FUN1(data);
}
void FUN3(char * data);
void FUN11(char * data)
{
    FUN3(data);
}
void FUN9(char * data);
void FUN13()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    FUN9(data);
}
void FUN11(char * data);
void FUN15()
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
    FUN11(data);
}
void FUN4(char * data)
{
    fprintf(stdout, data);
}
void FUN6(char * data)
{
    fprintf(stdout, "%s\n", data);
}
