static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    int data;
    data = -1;
    if(STATIC_CONST_TRUE)
    {
        fscanf(stdin, "%d", &data);
    }
    if(STATIC_CONST_TRUE)
    {
        {
            int i;
            int buffer[10] = { 0 };
            if (data < 10)
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
        }
    }
}
