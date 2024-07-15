void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            int i = 0;
<START>
            while(i++ < 10)
<END>
            {
            }
        }
        printLine("Hello from bad()");
    }
}
