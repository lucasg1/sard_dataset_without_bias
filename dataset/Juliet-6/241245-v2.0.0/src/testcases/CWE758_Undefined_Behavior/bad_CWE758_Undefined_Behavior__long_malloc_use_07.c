static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
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
