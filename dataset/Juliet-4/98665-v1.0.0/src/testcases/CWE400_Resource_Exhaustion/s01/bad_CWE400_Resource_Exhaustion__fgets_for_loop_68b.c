int VAR0;
int VAR1;
int VAR2;
void FUN0();
void FUN1()
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
    VAR0 = count;
    FUN0();
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
void FUN0()
{
    int count = VAR0;
    {
        size_t i = 0;
<START>
        for (i = 0; i < (size_t)count; i++)
<END>
        {
            printLine("Hello");
        }
    }
}
