void FUN0()
{
    while(1)
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
        break;
    }
}
