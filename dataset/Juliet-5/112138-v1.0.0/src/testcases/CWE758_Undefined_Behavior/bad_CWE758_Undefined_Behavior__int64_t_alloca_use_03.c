void FUN0()
{
    if(5==5)
    {
        {
            int64_t * pointer = (int64_t *)ALLOCA(sizeof(int64_t));
<START>
            int64_t data = *pointer; 
<END>
            printLongLongLine(data);
        }
    }
}
