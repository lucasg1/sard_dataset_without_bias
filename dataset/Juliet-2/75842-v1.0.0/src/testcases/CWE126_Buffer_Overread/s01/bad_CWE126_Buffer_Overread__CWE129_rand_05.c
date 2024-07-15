static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int data;
    data = -1;
    if(staticTrue)
    {
        data = RAND32();
    }
    if(staticTrue)
    {
        {
            int buffer[10] = { 0 };
            if (data >= 0)
            {
<START>
                printIntLine(buffer[data]);
<END>
            }
            else
            {
                printLine("ERROR: Array index is negative");
            }
        }
    }
}
