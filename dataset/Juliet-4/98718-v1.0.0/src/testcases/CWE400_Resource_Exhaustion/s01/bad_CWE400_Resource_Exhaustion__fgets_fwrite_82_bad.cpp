namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int count) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int count);
};
}
namespace NAMESPACE0
{
void FUN0()
{
    int count;
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
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(count);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int count)
{
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
