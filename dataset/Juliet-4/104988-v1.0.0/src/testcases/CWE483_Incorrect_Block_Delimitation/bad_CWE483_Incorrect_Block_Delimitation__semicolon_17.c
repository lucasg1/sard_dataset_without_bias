void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
