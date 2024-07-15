namespace NAMESPACE0
{
void FUN0(int &count)
{
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
}
} 
namespace NAMESPACE0
{
void FUN0(int &count);
void FUN2()
{
    int count;
    count = -1;
    FUN0(count);
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
} 
