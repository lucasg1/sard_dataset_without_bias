static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int count;
    count = -1;
    if(STATIC_CONST_FIVE==5)
    {
        fscanf(stdin, "%d", &count);
    }
    if(STATIC_CONST_FIVE==5)
    {
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
}
