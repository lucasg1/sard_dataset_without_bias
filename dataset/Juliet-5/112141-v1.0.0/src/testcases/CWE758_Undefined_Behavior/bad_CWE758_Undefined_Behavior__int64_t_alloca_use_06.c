static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
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
