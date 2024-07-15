static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
<START>
            int *intPointer = NULL;
<END>
            if (intPointer == NULL)
            {
                printIntLine(*intPointer);
            }
        }
    }
}
