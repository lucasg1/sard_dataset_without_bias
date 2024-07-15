typedef union
{
    short unionFirst;
    short unionSecond;
} CWE194_Unexpected_Sign_Extension__fgets_memmove_34_unionType;
void FUN0()
{
    short data;
    CWE194_Unexpected_Sign_Extension__fgets_memmove_34_unionType myUnion;
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
        {
            char source[100];
            char dest[100] = "";
            memset(source, 'A', 100-1);
            source[100-1] = '\0';
            if (data < 100)
            {
<START>
                memmove(dest, source, data);
<END>
                dest[data] = '\0'; 
            }
            printLine(dest);
        }
    }
}
