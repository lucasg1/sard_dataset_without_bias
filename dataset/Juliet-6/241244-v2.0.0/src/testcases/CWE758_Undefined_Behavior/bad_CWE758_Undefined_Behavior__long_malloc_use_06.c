static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
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
