void FUN0()
{
    int count;
    count = -1;
    switch(6)
    {
    case 6:
        fscanf(stdin, "%d", &count);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
        printLine("Benign, fixed string");
        break;
    default:
        if (count > 0 && count <= 2000)
        {
            SLEEP(count);
            printLine("Sleep time OK");
        }
        else
        {
            printLine("Sleep time too long");
        }
        break;
    }
}
void FUN1()
{
    int count;
    count = -1;
    switch(6)
    {
    case 6:
        fscanf(stdin, "%d", &count);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        if (count > 0 && count <= 2000)
        {
            SLEEP(count);
            printLine("Sleep time OK");
        }
        else
        {
            printLine("Sleep time too long");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    int count;
    count = -1;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        count = 20;
        break;
    }
    switch(7)
    {
    case 7:
        SLEEP(count);
        printLine("Sleep time possibly too long");
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    int count;
    count = -1;
    switch(6)
    {
    case 6:
        count = 20;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        SLEEP(count);
        printLine("Sleep time possibly too long");
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
