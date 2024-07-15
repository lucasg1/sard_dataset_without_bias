static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
        {
            int *intPointer = NULL;
            intPointer = (int *)malloc(sizeof(int));
            *intPointer = 5;
            printIntLine(*intPointer);
<START>
            if (intPointer != NULL)
<END>
            {
                *intPointer = 10;
            }
            printIntLine(*intPointer);
        }
    }
}
