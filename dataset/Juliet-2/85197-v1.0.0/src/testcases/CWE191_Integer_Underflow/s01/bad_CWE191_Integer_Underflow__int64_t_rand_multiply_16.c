void FUN0()
{
    int64_t data;
    data = 0LL;
    while(1)
    {
        data = (int64_t)RAND64();
        break;
    }
    while(1)
    {
        if(data < 0) 
        {
<START>
            int64_t result = data * 2;
<END>
            printLongLongLine(result);
        }
        break;
    }
}
