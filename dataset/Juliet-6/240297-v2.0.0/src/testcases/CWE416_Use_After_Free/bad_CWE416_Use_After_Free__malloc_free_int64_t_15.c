void FUN0()
{
    int64_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        printLongLongLine(data[0]);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
