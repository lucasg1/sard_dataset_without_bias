void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            int i;
<START>
            for (i = 0; i < 10; i++)
<END>
            {
            }
        }
        printLine("Hello from bad()");
    }
}
