static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
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
