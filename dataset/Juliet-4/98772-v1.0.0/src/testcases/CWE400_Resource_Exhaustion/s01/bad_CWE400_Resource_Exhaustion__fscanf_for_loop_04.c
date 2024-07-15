static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    int count;
    count = -1;
    if(STATIC_CONST_TRUE)
    {
        fscanf(stdin, "%d", &count);
    }
    if(STATIC_CONST_TRUE)
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
