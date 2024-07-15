void FUN0()
{
    int64_t data;
    data = 0LL;
    while(1)
    {
        data = LLONG_MAX;
        break;
    }
    while(1)
    {
        if(data > 0) 
        {
<START>
            int64_t result = data * 2;
<END>
            printLongLongLine(result);
        }
        break;
    }
}
