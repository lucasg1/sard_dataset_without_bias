static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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
