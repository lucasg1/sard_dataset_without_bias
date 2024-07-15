using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int> countMap);
void FUN1()
{
    int count;
    map<int, int> countMap;
    count = -1;
    count = 20;
    countMap[0] = count;
    countMap[1] = count;
    countMap[2] = count;
    FUN0(countMap);
}
void FUN2(map<int, int> countMap);
void FUN3()
{
    int count;
    map<int, int> countMap;
    count = -1;
    fscanf(stdin, "%d", &count);
    countMap[0] = count;
    countMap[1] = count;
    countMap[2] = count;
    FUN2(countMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int> countMap)
{
    int count = countMap[2];
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
void FUN2(map<int, int> countMap)
{
    int count = countMap[2];
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
