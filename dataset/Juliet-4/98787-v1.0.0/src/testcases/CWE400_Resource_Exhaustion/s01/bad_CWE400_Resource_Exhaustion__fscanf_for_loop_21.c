static int VAR0 = 0;
void FUN0(int count)
{
    if(VAR0)
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
void FUN1()
{
    int count;
    count = -1;
    fscanf(stdin, "%d", &count);
    VAR0 = 1; 
    FUN0(count);
}
