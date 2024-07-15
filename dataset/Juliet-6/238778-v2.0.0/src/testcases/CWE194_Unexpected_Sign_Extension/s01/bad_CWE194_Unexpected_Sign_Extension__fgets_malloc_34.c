typedef union
{
    short unionFirst;
    short unionSecond;
} CWE194_Unexpected_Sign_Extension__fgets_malloc_34_unionType;
void FUN0()
{
    short data;
    CWE194_Unexpected_Sign_Extension__fgets_malloc_34_unionType myUnion;
    data = 0;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = (short)atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        if (data < 100)
        {
<START>
            char * dataBuffer = (char *)malloc(data);
<END>
            if (dataBuffer == NULL) {exit(-1);}
            memset(dataBuffer, 'A', data-1);
            dataBuffer[data-1] = '\0';
            printLine(dataBuffer);
            free(dataBuffer);
        }
    }
}
