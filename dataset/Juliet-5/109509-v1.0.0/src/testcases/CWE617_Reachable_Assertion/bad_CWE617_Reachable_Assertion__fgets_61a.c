int FUN0(int data)
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
    return data;
}
int FUN0(int data);
void FUN2()
{
    int data;
    data = -1;
    data = FUN0(data);
<START>
    assert(data > ASSERT_VALUE);
<END>
}
