void FUN0()
{
    int i,j;
    int count;
    count = -1;
    for(i = 0; i < 1; i++)
    {
        fscanf(stdin, "%d", &count);
    }
    for(j = 0; j < 1; j++)
    {
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
}
