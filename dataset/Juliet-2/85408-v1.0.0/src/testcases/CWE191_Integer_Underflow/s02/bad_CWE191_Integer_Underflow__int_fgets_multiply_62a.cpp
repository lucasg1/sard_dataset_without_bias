namespace NAMESPACE0
{
void FUN0(int &data)
{
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = atoi(inputBuffer);
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
void FUN0(int &data);
void FUN2()
{
    int data;
    data = 0;
    FUN0(data);
    if(data < 0) 
    {
<START>
        int result = data * 2;
<END>
        printIntLine(result);
    }
}
} 
