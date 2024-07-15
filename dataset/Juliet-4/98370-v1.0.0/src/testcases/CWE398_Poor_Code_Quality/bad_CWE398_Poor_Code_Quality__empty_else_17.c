void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            int x;
            x = (rand() % 3);
            if (x == 0)
            {
                printLine("Inside the else statement");
            }
<START>
            else
<END>
            {
            }
        }
        printLine("Hello from bad()");
    }
}
