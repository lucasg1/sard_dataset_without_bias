void FUN0(void * countVoidPtr);
void FUN1()
{
    int count;
    count = -1;
    count = RAND32();
    FUN0(&count);
}
void FUN0(void * countVoidPtr)
{
    int * countPtr = (int *)countVoidPtr;
    int count = (*countPtr);
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
