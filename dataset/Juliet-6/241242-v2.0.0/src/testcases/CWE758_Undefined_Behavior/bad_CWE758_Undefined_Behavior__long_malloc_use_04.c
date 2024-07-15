static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
        {
            long * pointer = (long *)malloc(sizeof(long));
            if (pointer == NULL) {exit(-1);}
<START>
            long data = *pointer; 
<END>
            free(pointer);
            printLongLine(data);
        }
    }
}
