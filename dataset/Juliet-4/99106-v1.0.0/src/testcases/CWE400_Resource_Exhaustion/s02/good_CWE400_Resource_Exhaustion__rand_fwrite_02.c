void FUN0()
{
    int count;
    count = -1;
    if(1)
    {
        count = RAND32();
    }
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            size_t i = 0;
            FILE *pFile = NULL;
            const char *filename = "output_good.txt";
            if (count > 0 && count <= 20)
            {
                pFile = fopen(filename, "w+");
                if (pFile == NULL)
                {
                    exit(1);
                }
                for (i = 0; i < (size_t)count; i++)
                {
                    if (strlen(SENTENCE) != fwrite(SENTENCE, sizeof(char), strlen(SENTENCE), pFile)) exit(1);
                }
                if (pFile)
                {
                    fclose(pFile);
                }
            }
        }
    }
}
void FUN1()
{
    int count;
    count = -1;
    if(1)
    {
        count = RAND32();
    }
    if(1)
    {
        {
            size_t i = 0;
            FILE *pFile = NULL;
            const char *filename = "output_good.txt";
            if (count > 0 && count <= 20)
            {
                pFile = fopen(filename, "w+");
                if (pFile == NULL)
                {
                    exit(1);
                }
                for (i = 0; i < (size_t)count; i++)
                {
                    if (strlen(SENTENCE) != fwrite(SENTENCE, sizeof(char), strlen(SENTENCE), pFile)) exit(1);
                }
                if (pFile)
                {
                    fclose(pFile);
                }
            }
        }
    }
}
void FUN2()
{
    int count;
    count = -1;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        count = 20;
    }
    if(1)
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
            for (i = 0; i < (size_t)count; i++)
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
void FUN3()
{
    int count;
    count = -1;
    if(1)
    {
        count = 20;
    }
    if(1)
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
            for (i = 0; i < (size_t)count; i++)
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
