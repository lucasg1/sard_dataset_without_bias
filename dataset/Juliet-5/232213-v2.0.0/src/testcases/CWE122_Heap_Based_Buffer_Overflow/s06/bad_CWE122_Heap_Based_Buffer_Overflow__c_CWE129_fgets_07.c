static int staticFive = 5;
void FUN0()
{
    int data;
    data = -1;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        {
            int i;
            int * buffer = (int *)malloc(10 * sizeof(int));
            if (buffer == NULL) {exit(-1);}
            for (i = 0; i < 10; i++)
            {
                buffer[i] = 0;
            }
            if (data >= 0)
            {
<START>
                buffer[data] = 1;
<END>
                for(i = 0; i < 10; i++)
                {
                    printIntLine(buffer[i]);
                }
            }
            else
            {
                printLine("ERROR: Array index is negative.");
            }
            free(buffer);
        }
    }
}
