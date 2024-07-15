void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
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
    }
}
