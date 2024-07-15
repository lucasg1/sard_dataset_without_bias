void FUN0(int count);
void FUN1()
{
    int count;
    count = -1;
    count = 20;
    FUN0(count);
}
void FUN2(int count);
void FUN3()
{
    int count;
    count = -1;
    fscanf(stdin, "%d", &count);
    FUN2(count);
}
void FUN5(int count);
void FUN0(int count)
{
    FUN5(count);
}
void FUN7(int count);
void FUN2(int count)
{
    FUN7(count);
}
void FUN9(int count);
void FUN5(int count)
{
    FUN9(count);
}
void FUN11(int count);
void FUN7(int count)
{
    FUN11(count);
}
void FUN9(int count)
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
void FUN11(int count)
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
