namespace NAMESPACE0
{
void FUN0(int &count)
{
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            count = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
}
void FUN1()
{
    int count;
    count = -1;
    FUN0(count);
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_FUN1.txt";
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
} 
