extern int VAR0;
int FUN0(int data)
{
    if(VAR0)
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
    return data;
}
int VAR0 = 0;
int FUN0(int data);
void FUN2()
{
    int data;
    data = -1;
    VAR0 = 1; 
    data = FUN0(data);
    {
<START>
        short shortData = (short)data;
<END>
        printShortLine(shortData);
    }
}
