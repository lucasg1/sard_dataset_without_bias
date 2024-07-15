void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            twoIntsStruct * pointer = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
            if (pointer == NULL) {exit(-1);}
<START>
            twoIntsStruct data = *pointer; 
<END>
            free(pointer);
            printIntLine(data.intOne);
            printIntLine(data.intTwo);
        }
    }
    else
    {
        {
            twoIntsStruct data;
            twoIntsStruct * pointer = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
            if (pointer == NULL) {exit(-1);}
            data.intOne = 1;
            data.intTwo = 2;
            *pointer = data; 
            {
                twoIntsStruct data = *pointer;
                printIntLine(data.intOne);
                printIntLine(data.intTwo);
            }
            free(pointer);
        }
    }
}
