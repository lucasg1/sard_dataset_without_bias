void FUN0(int countArray[]);
void FUN1()
{
    int count;
    int countArray[5];
    count = -1;
    fscanf(stdin, "%d", &count);
    countArray[2] = count;
    FUN0(countArray);
}
void FUN0(int countArray[])
{
    int count = countArray[2];
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
