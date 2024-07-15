static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int data;
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        fscanf(stdin, "%d", &data);
    }
    if(STATIC_CONST_FIVE==5)
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
