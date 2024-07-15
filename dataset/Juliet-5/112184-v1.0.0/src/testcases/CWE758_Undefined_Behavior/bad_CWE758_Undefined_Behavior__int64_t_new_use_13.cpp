namespace NAMESPACE0
{
void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            int64_t * pointer = new int64_t;
<START>
            int64_t data = *pointer; 
<END>
            delete pointer;
            printLongLongLine(data);
        }
    }
}
} 
