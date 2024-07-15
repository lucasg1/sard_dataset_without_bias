namespace NAMESPACE0
{
void FUN0()
{
    int count;
    int &countRef = count;
    count = -1;
    count = RAND32();
    {
        int count = countRef;
        {
            size_t i = 0;
            FILE *pFile = NULL;
            const char *filename = "output_FUN0.txt";
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
} 
