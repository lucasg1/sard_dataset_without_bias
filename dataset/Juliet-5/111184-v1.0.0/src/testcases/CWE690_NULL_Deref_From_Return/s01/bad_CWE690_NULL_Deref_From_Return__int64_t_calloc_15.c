void FUN0()
{
    int64_t * data;
    data = NULL; 
    data = (int64_t *)calloc(1, sizeof(int64_t));
    switch(6)
    {
    case 6:
<START>
        data[0] = 5LL;
<END>
        printLongLongLine(data[0]);
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
