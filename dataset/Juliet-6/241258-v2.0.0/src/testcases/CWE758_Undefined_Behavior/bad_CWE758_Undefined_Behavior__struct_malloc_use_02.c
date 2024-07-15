void FUN0()
{
    if(1)
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
}
