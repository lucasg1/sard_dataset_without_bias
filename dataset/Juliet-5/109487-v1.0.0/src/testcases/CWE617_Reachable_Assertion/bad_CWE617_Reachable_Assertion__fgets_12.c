void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrueOrFalse())
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
    else
    {
        data = ASSERT_VALUE+1;
    }
<START>
    assert(data > ASSERT_VALUE);
<END>
}
