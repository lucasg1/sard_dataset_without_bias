void FUN0()
{
    int64_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (int64_t *)malloc(sizeof(data));
        if (data == NULL) {exit(-1);}
        *data = 2147483643LL;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
<START>
    printLongLongLine(*data);
<END>
    free(data);
}
