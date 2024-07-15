void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            int x = (rand() % 3);
            switch (x)
            {
<START>
            case 0:
<END>
                break;
            }
        }
        printLine("Hello from bad()");
    }
}
