void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            int x;
            x = (rand() % 3);
<START>
            if (x == 0)
<END>
            {
            }
            else
            {
                printLine("Inside the else statement");
            }
        }
        printLine("Hello from bad()");
    }
}
