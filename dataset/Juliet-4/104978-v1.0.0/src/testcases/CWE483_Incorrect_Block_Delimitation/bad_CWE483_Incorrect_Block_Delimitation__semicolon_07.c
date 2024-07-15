static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
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
