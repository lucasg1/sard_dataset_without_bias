void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        {
            int x = (rand() % 3);
            switch (x)
            {
            case 0:
                printLine("0");
                break;
            case 1:
                printLine("1");
                break;
            case 2:
                printLine("2");
                break;
            default:
                printLine("Invalid Number");
                break;
            }
        }
    }
}
