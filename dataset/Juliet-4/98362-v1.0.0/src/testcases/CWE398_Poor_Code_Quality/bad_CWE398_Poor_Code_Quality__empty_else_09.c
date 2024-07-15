void FUN0()
{
    if(GLOBAL_CONST_TRUE)
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
