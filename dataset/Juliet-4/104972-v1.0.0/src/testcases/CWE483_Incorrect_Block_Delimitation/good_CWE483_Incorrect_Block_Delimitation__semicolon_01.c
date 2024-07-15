void FUN0()
{
    {
        int x = (rand() % 3);
        int y = 0;
        if (x == 0)
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
