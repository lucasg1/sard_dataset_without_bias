static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
        {
            int64_t * pointer = (int64_t *)malloc(sizeof(int64_t));
            if (pointer == NULL) {exit(-1);}
<START>
            int64_t data = *pointer; 
<END>
            free(pointer);
            printLongLongLine(data);
        }
    }
}
