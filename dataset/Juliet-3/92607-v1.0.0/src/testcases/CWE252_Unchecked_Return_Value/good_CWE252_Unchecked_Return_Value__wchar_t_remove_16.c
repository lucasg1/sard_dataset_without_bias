void FUN0()
{
    while(1)
    {
        if (REMOVE(L"removemegood.txt") != 0)
        {
            printLine("remove failed!");
        }
        break;
    }
}
