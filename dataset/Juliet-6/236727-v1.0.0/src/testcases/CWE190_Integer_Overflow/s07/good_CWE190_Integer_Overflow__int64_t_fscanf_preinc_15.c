void FUN0()
{
    int64_t data;
    data = 0LL;
    switch(6)
    {
    case 6:
        fscanf (stdin, "%" SCNd64, &data);
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
        if (data < LLONG_MAX)
        {
            ++data;
            int64_t result = data;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
        break;
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    switch(6)
    {
    case 6:
        fscanf (stdin, "%" SCNd64, &data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        if (data < LLONG_MAX)
        {
            ++data;
            int64_t result = data;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    int64_t data;
    data = 0LL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = 2;
        break;
    }
    switch(7)
    {
    case 7:
    {
        ++data;
        int64_t result = data;
        printLongLongLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    int64_t data;
    data = 0LL;
    switch(6)
    {
    case 6:
        data = 2;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        ++data;
        int64_t result = data;
        printLongLongLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
