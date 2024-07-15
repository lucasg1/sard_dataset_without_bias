void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
