static int VAR0 = 0;
void FUN0(int count)
{
    if(VAR0)
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
void FUN1()
{
    int count;
    count = -1;
    count = RAND32();
    VAR0 = 1; 
    FUN0(count);
}
