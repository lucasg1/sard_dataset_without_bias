void FUN0()
{
    while(1)
    {
        {
            int *intPointer = NULL;
            intPointer = (int *)malloc(sizeof(int));
            *intPointer = 5;
            printIntLine(*intPointer);
            *intPointer = 10;
            printIntLine(*intPointer);
        }
        break;
    }
}
