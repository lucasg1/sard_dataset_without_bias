using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int> countVector);
void FUN1()
{
    int count;
    vector<int> countVector;
    count = -1;
    count = 20;
    countVector.insert(countVector.end(), 1, count);
    countVector.insert(countVector.end(), 1, count);
    countVector.insert(countVector.end(), 1, count);
    FUN0(countVector);
}
void FUN2(vector<int> countVector);
void FUN3()
{
    int count;
    vector<int> countVector;
    count = -1;
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
    countVector.insert(countVector.end(), 1, count);
    countVector.insert(countVector.end(), 1, count);
    countVector.insert(countVector.end(), 1, count);
    FUN2(countVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int> countVector)
{
    int count = countVector[2];
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
void FUN2(vector<int> countVector)
{
    int count = countVector[2];
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_FUN4.txt";
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
