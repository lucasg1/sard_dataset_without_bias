void FUN0()
{
    {
        twoIntsStruct data;
        twoIntsStruct * pointer = (twoIntsStruct *)ALLOCA(sizeof(twoIntsStruct));
        data.intOne = 1;
        data.intTwo = 2;
        *pointer = data; 
        {
            twoIntsStruct data = *pointer;
            printIntLine(data.intOne);
            printIntLine(data.intTwo);
        }
    }
}
