typedef union
{
    int unionFirst;
    int unionSecond;
} CWE400_Resource_Exhaustion__fscanf_fwrite_34_unionType;
void FUN0()
{
    int count;
    CWE400_Resource_Exhaustion__fscanf_fwrite_34_unionType myUnion;
    count = -1;
    count = 20;
    myUnion.unionFirst = count;
    {
        int count = myUnion.unionSecond;
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
void FUN1()
{
    int count;
    CWE400_Resource_Exhaustion__fscanf_fwrite_34_unionType myUnion;
    count = -1;
    fscanf(stdin, "%d", &count);
    myUnion.unionFirst = count;
    {
        int count = myUnion.unionSecond;
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
