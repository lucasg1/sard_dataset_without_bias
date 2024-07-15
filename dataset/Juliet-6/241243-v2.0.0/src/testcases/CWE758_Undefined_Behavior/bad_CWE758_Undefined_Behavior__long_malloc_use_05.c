static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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
