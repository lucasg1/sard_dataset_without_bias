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
    switch(7)
    {
    case 7:
    {
<START>
        ++data;
<END>
        int64_t result = data;
        printLongLongLine(result);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
