void FUN0()
{
    while(1)
    {
        {
            const char *charString = "shouldn\'t see this value";
            int x;
            x = (rand() % 3);
            switch (x)
            {
            case 0:
                charString = "0";
                break;
            case 1:
                charString = "1";
                break;
            default:
                return;
            }
            printLine(charString);
        }
        break;
    }
}
