void FUN0()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            int x = (rand() % 3);
            int y = 0;
<START>
            if (x == 0);
<END>
            {
                printLine("x == 0");
                y = 1;
            }
            if (y)
            {
                printLine("x was 0\n");
            }
        }
    }
}
